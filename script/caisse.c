#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int MontantClient;
    srand (time (0));
    double ValeurAPayer = rand() % 100;
    printf ("Le produit vaut %lf Roupies. Combien voulez-vous me donner ?", ValeurAPayer);
    scanf ("%d", &MontantClient);
    
    while (MontantClient < ValeurAPayer)
        {
            printf ("Erreur. Veuillez donnez le montant souhaite ou plus\n");
            printf ("Le produit vaut %lf Roupies. Combien voulez-vous me donner ?\n", ValeurAPayer);
            scanf ("%d", &MontantClient);
        }
    
    
}
    
   
