#include "etudiant.h"
#include "recupererNoteParMatiere.h"

void recupererInfoPerso(Etudiant*,int,Matiere*,int);

void recupererInfoPerso(Etudiant *etudiant,int n,Matiere *matiere,int nbre_matiere)
{
    int nbre_notes;
    char sexe;
    printf("\n\n----Entrer les informations personnels des etudiants----\n\n");
    for (int i = 0; i < n; i++)
    {
         printf("Informations de l'etudiant numero %d\n",i+1);
         etudiant[i].id =i + 1;
         printf("Nom : ");
         lireChaine(etudiant[i].nom,30);
         printf("Prenom(s) : ");
         lireChaine(etudiant[i].prenom,30);
         do
         {
         printf("Sexe(M/F) : ");
         scanf("%s",&etudiant[i].sexe);
            sexe = etudiant[i].sexe;
            if (sexe!='F' & sexe!='M' & sexe!='f' & sexe!='m')
            {
                printf("Entrer un sexe valide\n");
            }
            
         } while(sexe!='F' & sexe!='M' & sexe!='f' & sexe!='m');
         viderBuffer();
         printf("Age : ");
         scanf("%d",&etudiant[i].age);
         viderBuffer();
    
         etudiant[i].notes = (double**)calloc(nbre_matiere,sizeof(double*));
         etudiant[i].moyenneMatiere = (double*)calloc(nbre_matiere,sizeof(double));
        
         recupererNoteParMatiere(etudiant[i].notes,matiere,nbre_matiere,&nbre_notes,etudiant[i].moyenneMatiere);
         
         //Calcule de la moyenne de l'etudiant
         etudiant[i].moyenneEtudiant = moyenne(etudiant[i].moyenneMatiere,nbre_matiere);

         
         printf("\n-------------\n");
    }
}