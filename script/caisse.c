#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int CalculMonnaie (double ValeurAPayer, int MontantClient)
{
    int monnaie = MontantClient - ValeurAPayer;
    printf ("Votre monnaie est de %d Roupies\n", monnaie);


    int i, j;
    int BilletsRendus;
    int PiecesRendues;
    
    
    int Billets [7] = {2000, 1000, 500, 200, 100, 50, 25};
    int Pieces [7] = {20, 10, 5, 1, 50, 20, 5};
    
    for (i=0; i<7; i++)
        {
            BilletsRendus = monnaie / Billets[i];
            if (BilletsRendus > 0) 
            {
                printf("Billet de %d a rendre\n", Billets[i]);
                monnaie = monnaie - (BilletsRendus * Billets[i]);
            }
            for (j=0; j<4; j++)
                {
                    PiecesRendues = monnaie / Pieces[i];
            if (PiecesRendues > 0) 
            {
                printf("Piece de %d a rendre\n", Pieces[i]);
                monnaie = monnaie - (PiecesRendues * Pieces[i]);
            }
                    
                }
        }
}

int main() 
{

    int MontantClient;
    srand (time (0));
    double ValeurAPayer = rand() % 2000;
    printf ("Le produit vaut %lf Roupies. Combien voulez-vous me donner ?", ValeurAPayer);
    scanf ("%d", &MontantClient);
    
    while (MontantClient < ValeurAPayer)
        {
            printf ("Erreur. Veuillez donnez le montant souhaite ou plus\n");
            printf ("Le produit vaut %lf Roupies. Combien voulez-vous me donner ?\n", ValeurAPayer);
            scanf ("%d", &MontantClient);
        }
     CalculMonnaie (ValeurAPayer, MontantClient);
}
    

    

