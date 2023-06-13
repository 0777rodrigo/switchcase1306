#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    int i, j;
    float notas[2][3];
    float media[3];
    float somaNotas;
    char disciplina[3][300];
    int opcao;

    for (i = 0; i < 3; i++)
    {

        printf("digite a %d disciplina \n ", i + 1);
        gets(disciplina[i]);

        for (j = 0; j < 2; j++)
        {

            printf("digite a %d nota \n ", j + 1, i + 1);
            scanf("%f", &notas[i][j]);
        }
        while (notas[i][j] < 0 || notas[i][j] > 10);

        somaNotas += notas[i][j];
    }

    media[i] = somaNotas / j;
    somaNotas = 0;

}



