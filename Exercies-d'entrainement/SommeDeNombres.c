#include <stdio.h>

int main(void)
{
    int min = 0;
    int max = 0;
    int somme = 0;
    printf("Entrer l'entier naturel de départ: \n");
    scanf("%d", &min);
    printf("Entrer l'entier naturel d'arrivé: \n");
    scanf("%d", &max);
    if (min > max)
    {
        printf("Erreur: nombre de départ supérieur au nombre d'arrivé\n");
    }
    else if (max > 1000)
    {
        printf("Erreur: L'entier naturel de d'arrivée ne doit pas dépasser 1000\n");
    }
    else if (min < 0)
    {
        printf("Erreur: le nombre de départ est inférieur à 0\n");
    }
    else if (min == 0)
    {
        printf("%d", ((max*(max + 1))/2) );
    }
    else
    {
        //printf("debug\n");
        for (int i = min; i <= max; i++)
        {
            // min++;
            //somme += min;
            somme += i;
        }
        //somme -= 1;
        printf("%d\n", somme);
    }

    
    
    return 0;
}