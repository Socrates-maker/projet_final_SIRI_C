#include "etudiant.h"
#include "recupererNoteParMatiere.h"

void recupererInfoPerso(Etudiant*,int,Matiere*,int);

void recupererInfoPerso(Etudiant *etudiant,int n,Matiere *matiere,int nbre_matiere)
{
    int nbre_notes;
    printf("\n\n----Entrer les informations personnels des etudiants----\n\n");
    for (int i = 0; i < n; i++)
    {
         printf("Informations de l'etudiant numero %d\n",i+1);
         etudiant[i].id =i + 1;
         printf("Nom : ");
         scanf("%s",etudiant[i].nom);
         //fgets(etudiant.nom,50,stdin);
         printf("Prenom(s) : ");
         //fgets(etudiant.prenom,50,stdin);
         scanf("%s",etudiant[i].prenom);
         printf("Sexe : ");
         scanf("%s",&etudiant[i].sexe);
         printf("Age : ");
         scanf("%d",&etudiant[i].age);
        
         etudiant[i].notes = (double**)calloc(nbre_matiere,sizeof(double*));
         etudiant[i].moyenneMatiere = (double*)calloc(nbre_matiere,sizeof(double));
        
         recupererNoteParMatiere(etudiant[i].notes,matiere,nbre_matiere,&nbre_notes,etudiant[i].moyenneMatiere);
         
         //Calcule de la moyenne de l'etudiant
         etudiant[i].moyenneEtudiant = moyenne(etudiant[i].moyenneMatiere,nbre_matiere);

         
         printf("\n-------------\n");
    }
}