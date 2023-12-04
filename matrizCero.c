#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int fila = 0, columna = 0; // Por que deley debo ponerlos aca? Los estoy declarando como variables totalmentew globables?
// Es importante estos nombres en las  funciones de matrices? deben ser los mismo?
// Habria diferencia de poner int fila, int columna, int MatrizEjemplo[fila][columna] ?

void fceroMatriz(int MatrizCero[fila][columna])
{
    for (int i = 0; i < fila; i++)
    {
        for (int j = 0; j < columna; j++)
        {
            MatrizCero[i][j] = 0;
            printf("%4d |", MatrizCero[i][j]);
        }
        printf("\n");
    }
}

// En esta bloque mi cerebro si procesa lo que esta sucediendo pero no logro comprenderlo totalmente
void funoMatriz(int MatrizUno[fila][columna])
{

    fceroMatriz(MatrizUno);
    printf("\n\n");
    // Asigna el valor de 1 a la diagonal
    for (int i = 0; i < fila & i < columna; i++)
    {
        MatrizUno[i][i] = 1;
    }

    for (int i = 0; i < fila; i++)
    {
        for (int j = 0; j < columna; j++)
        {
            printf("%4d |", MatrizUno[i][j]);
        }
        printf("\n");
    }
}

void randomMatriz(int MatrizRandom[fila][columna])
{
    srand(time(NULL));
    for (int i = 0; i < fila; i++)
    {
        for (int j = 0; j < columna; j++)
        {
            MatrizRandom[i][j] = rand() % 100;
            printf("%4d |", MatrizRandom[i][j]);
        }
        printf("\n");
    }
}

void transpuestaMatriz(int MatrizTranspuesta[columna][fila])
{
    int MatrizR[fila][columna];
    randomMatriz(MatrizR); //Aqui le llamamos y ya lstamos trabajando con Matriz R?
    printf("\n");
    for (int i = 0; i < columna; i++)
    {
        for (int j = 0; j < fila; j++)
        {
            MatrizTranspuesta[j][i] = MatrizR[i][j];
            printf("%4d |", MatrizTranspuesta[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    printf("******* COMPILACION EJERCICIOS*********\n");
    printf("Ingrese el numero de filas para la matriz:\n");
    scanf("%d", &fila);
    printf("Ingrese el numero de columnas:\n");
    scanf("%d", &columna);

    int matriz[fila][columna];
    printf("Se imprime la matriz llena de ceros: \n");
    fceroMatriz(matriz);
    printf("\n\n");

    printf("Se llena la diagonal de la matriz de unos: \n");
    funoMatriz(matriz);
    printf("\n\n");

    printf("Matriz generada de numeros aleatorios: \n");
    randomMatriz(matriz);
    printf("\n\n");

    printf("Matriz transpuesta de numeros aleatorios: \n");
    transpuestaMatriz(matriz);
    return 0;
}
