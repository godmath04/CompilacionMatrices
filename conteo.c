/* En un evento de votacion participan 5 candidatos representados por numeros
del 1 al 5. Los votos se podran ingresar desordenadamente y el ingreso termina
con el #0
Candidato 1, 2, 3, 4 y 5*/

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int voto;
    int candidatos[5] = {0};

    int ganador = 0;

    do
    {
        printf("Ingrese el numero de su candidato:\n");
        scanf("%d", &voto);
        candidatos[voto-1]++;
    } while (voto != 0);

    for (int i = 0; i < 5; i++)
    {
        printf("Voto de candidato %d:\t %d\n", i+1, candidatos[i] );
    }

    for (int i = 0; i < 5; i++)
    {
        if (candidatos[i] > candidatos[ganador] )
        {
         ganador = i;
        }
        
    }
    printf("El candidato ganador es el %d con %d votos", ganador+1, candidatos[ganador]);
    
    
    
    return 0;
}
