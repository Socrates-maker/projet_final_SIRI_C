#include "matiere.h"

void recupererMatiere(Matiere*,int);

void recupererMatiere(Matiere *matiere,int n)
{
    printf("\n\n----Entrer le nom des matieres----\n\n");
    for (int i = 0; i < n; i++)
    {
         printf("matiere numero %d\n",i+1);
         scanf("%s",matiere[i].nom);
    }
}