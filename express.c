/*Esto es una compilacion express de trabajo de matrices con funciones*/
// Funcion llenada al azar
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randomMatriz(int fila, int columna, int Matriz[fila][columna])
{
    srand(time(NULL));
    for (int i = 0; i < fila; i++)
    {
        for (int j = 0; j < columna; j++)
        {
            Matriz[i][j] = rand() % 100;
            printf("%4d\t|", Matriz[i][j]);
        }
        printf("\n");
    }
}

int main(int argc, char const *argv[])
{
    int fil = 0, col = 0;
    printf("Ingrese el numero de su fila: \n");
    scanf("%d", &fil);
    printf("Ingrese el numero de su columna: \n");
    scanf("%d", &col);

    int MatrizA[fil][col];

    randomMatriz(fil, col, MatrizA);

    return 0;
}
