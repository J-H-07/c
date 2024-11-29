#include <stdio.h>
#include <stdlib.h>

int rendre_monnaie(int somme, int diviseur);


void main(void)
{
    int montant = 0;
    int rendu = 0;
    int rendre = 1;
    do
    {
        printf("Entrer le montant total:\n");
        scanf("%d", &montant);
        printf("Entrer le montant rendu:\n");
        scanf("%d", &rendu);
        if (rendu > montant)
        {
            rendre = rendu - montant;
        }
        else if (rendu == montant)
        {
            printf("Pas de monnaie à rendre\n");
            break;
        }
        
        else
        {
            printf("Vous n'avez pas donné assez d'argent, vous devez encore: %d€ \n", abs(rendu - montant));
            rendre = 0;
        }
    } while (rendre == 0);

    printf("Je vous rends:\n");
    printf("%d billets de 20€\n", (rendre_monnaie(rendre, 20)>=1)?rendre_monnaie(rendre, 20):0);
    rendre -= (rendre_monnaie(rendre, 20)*20);
    printf("%d billets de 10€\n", (rendre_monnaie(rendre, 10)>=1)?rendre_monnaie(rendre, 10):0);
    rendre -= (rendre_monnaie(rendre, 10)*10);
    printf("%d billets de 5€\n", (rendre_monnaie(rendre, 5)>=1)?rendre_monnaie(rendre, 5):0);
    rendre -= (rendre_monnaie(rendre, 5)*5);
    printf("%d pièces de 2€\n", (rendre_monnaie(rendre, 2)>=1)?rendre_monnaie(rendre, 2):0);
    rendre -= (rendre_monnaie(rendre, 2)*2);
    printf("%d pièces de 1€\n", (rendre_monnaie(rendre, 1)>=1)?rendre_monnaie(rendre, 1):0);

}

int  rendre_monnaie(int somme, int diviseur)
{
    return (somme/diviseur);

}
