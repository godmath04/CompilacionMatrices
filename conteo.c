/* En un evento de votacion participan 5 candidatos representados por numeros
del 1 al 5. Los votos se podran ingresar desordenadamente y el ingreso termina
con el #0
Candidato 1, 2, 3, 4 y 5*/

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int voto;
    int ganador = 0;
    int candidatos[5] = {0};

    do
    {
        printf("Ingrese el # del candidato para su voto y presione 0 para salir: \n");
        scanf("%d", &voto);
        candidatos[voto-1]++;

    } while ( voto != 0);

    for (int i = 0; i < 5; i++)
    {
        printf("Los voto del candidato %d son %d.\n", i+1, candidatos[i]);
        if (candidatos[i] > candidatos[ganador])
        {
            ganador = i;
        }
        
    }

    printf("El candidato ganador es %d con %d votos.\n", ganador+1, candidatos[ganador]);
    
    

    return 0;
}
