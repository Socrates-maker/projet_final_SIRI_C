#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../Headers/lireChaine.h"
#include "../Headers/parametres_salle.h"
#include "../Headers/recupererMatiere.h"
#include "../Headers/recupererInfoPerso.h"
#include "../Headers/menu.h"


int main(int argc, char *argv[])
{
    int n; //effectif de la classe
    int nbre_matiere;
    char nom_filiere[50];
    Etudiant *etudiant;
    Matiere *matiere;
    
    //Recuperer les parametre de la salle
    parametres_salle(&n, nom_filiere,&nbre_matiere);

     //afficher les parametres de la salle
    printf("Filiere : %sEffectif : %d\nNombre de matieres : %d matieres\n", nom_filiere,n,nbre_matiere);
    
    //allocation memoire pour recuprer les matiere
    matiere = (Matiere*)calloc(nbre_matiere,sizeof(Matiere));

    //recuperation de des matiere
    recupererMatiere(matiere,nbre_matiere);
     //allocation memoire pour recuperer les etudiant et leur infos
    etudiant = (Etudiant*)calloc(n,sizeof(Etudiant));
   
    //recuper les etudiants 
    //recuper les notes par matiere et calculer les moyenne par matiere 
    recupererInfoPerso(etudiant,n,matiere,nbre_matiere);

     menu();

    
    //affichage des etudiants
    printf("\n\n----Liste des etudiants---\n\n");
    for (int i = 0; i < n; i++)
    {
         printf("Etudiant numero %d\n",etudiant[i].id);
         printf("Nom : %s\nPrenom: %s \nSexe : %c \nAge : %d \n",etudiant[i].nom,etudiant[i].prenom,etudiant[i].sexe,etudiant[i].age);
         for (int j = 0; j < nbre_matiere; j++)
         {
              printf("\nMoyenne de l'etudiant dans la matiere %s\n", matiere[j].nom);
              printf("%lf",etudiant[i].moyenneMatiere[j]);
         }

         printf("\nMoyenne genarale : %lf\n",etudiant[i].moyenneEtudiant);
         printf("\n------------\n");
         
     }
     for (int i = 0; i < nbre_matiere; i++)
     {
          free(etudiant[i].notes);
          free(etudiant[i].moyenneMatiere);
     }
     
     free(etudiant);
     free(matiere);


   

}