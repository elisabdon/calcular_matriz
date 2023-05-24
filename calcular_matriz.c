#include<stdio.h>

int main() 
{
    int matriz[10][10];
    int i;
	int j;
	int temporario; 

    printf("digite os numeros da matriz sua matriz [10][10]:\n");
    for (i = 0; i < 10; i++) 
	{
        for (j = 0; j < 10; j++) 
		{
			printf("posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
	printf("*********************");
    printf("\nMatriz original:\n");
    printf("*********************");
    for (i = 0; i < 10; i++) 
	{
        for (j = 0; j < 10; j++) 
		{
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // troca da linha2 pela linha8
    for (j = 0; j < 10; j++) 
	{
        temporario = matriz[1][j];
        matriz[1][j] = matriz[7][j];
        matriz[7][j] = temporario;
    }

    // troca da coluna4 pela coluna10
    for (i = 0; i < 10; i++) 
	{
        temporario = matriz[i][3];
        matriz[i][3] = matriz[i][9];
        matriz[i][9] = temporario;
    }

    // troca das diagonais
    for (i = 0; i < 10; i++) 
	{
        temporario = matriz[i][i];
        matriz[i][i] = matriz[i][9-i];
        matriz[i][9-i] = temporario;
    }

	printf("*********************");
    printf("\nMatriz modificada:\n");
	printf("*********************");
    for (i = 0; i < 10; i++) 
	{
        for (j = 0; j < 10; j++) 
		{
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}