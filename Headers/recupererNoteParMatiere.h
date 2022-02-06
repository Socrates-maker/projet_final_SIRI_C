#include "moyenne.h"

void recupererNoteParMatiere(double**,Matiere*,int,int*,double*);


void recupererNoteParMatiere(double **notes,Matiere *matiere, int nbre_matiere,int *nbre_notes,double *moyenneMatiere)
{
    for (int j = 0; j < nbre_matiere; j++)
    {
        printf("Entrer le nombre de note de l'etudiant dans la matiere %s\n", matiere[j].nom);
        scanf("%d",nbre_notes);
        if (*nbre_notes>1)
        {
            notes[j]= (double*)calloc(*nbre_notes,sizeof(double));
            for(int k = 0; k <  *nbre_notes; k++)
            {
                printf("Entrer la note %d\n",k+1);
                scanf("%lf",&notes[j][k]);
                viderBuffer();
            }
            moyenneMatiere[j] = moyenne(notes[j],*nbre_notes);
            free(notes[j]);  
        }else{
            printf("Entre la note \n");
            notes[j] = (double*)calloc(1,sizeof(double));
            scanf("%lf",notes[j]);
            viderBuffer();
            moyenneMatiere[j] = *notes[j];
            free(notes[j]);
        }  
          
    }
}