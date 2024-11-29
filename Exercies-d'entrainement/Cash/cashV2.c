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
    int rendre = 0;
    return (somme/diviseur);

}

// int rendre20(int n)
// {
//     int billet20 = 0;
//     if ((n / 20) != 0)
//     {
//         billet20 = (n / 20);
//     }
//     else
//     {
//         billet20 = 0;
//     }
//     return billet20;
// }

// int rendre10(int n)
// {
//     int billet10 = 0;
//     if ((n / 10) != 0)
//     {
//         billet10 = (n / 10);
//     }
//     else
//     {
//         billet10 = 0;
//     }
//     return billet10;
// }

// int rendre5(int n)
// {
//     int billet5 = 0;
//     if ((n / 5) != 0)
//     {
//         billet5 = (n / 5);
//     }
//     else
//     {
//         billet5 = 0;
//     }
//     return billet5;
// }

// int rendre2(int n)
// {
//     int billet2 = 0;
//     if ((n / 2) != 0)
//     {
//         billet2 = (n / 2);
//     }
//     else
//     {
//         billet2 = 0;
//     }
//     return billet2;
// }

// int rendre1(int n)
// {
//     int billet1 = 0;
//     if ((n / 1) != 0)
//     {
//         billet1 = (n / 1);
//     }
//     else
//     {
//         billet1 = 0;
//     }
//     return billet1;
// }