#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../Headers/lireChaine.h"
#include "../Headers/parametres_salle.h"
#include "../Headers/recupererMatiere.h"
#include "../Headers/recupererInfoPerso.h"
#include "../Headers/menu.h"
#include "../Headers/trierTab.h"
#include "../Headers/afficherMoyEtudiant.h"
#include "../Headers/afficherMeilleurEtudiante.h"
#include "../Headers/moyenneSalle.h"



int main(int argc, char *argv[])
{
    int n; //effectif de la classe
    int nbre_matiere;
    char nom_filiere[50];
    Etudiant *etudiant,*tmp;
    Matiere *matiere;
    int choice;
    
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
    //recuper les notes par matiere et calculer les moyennes par matiere 
    recupererInfoPerso(etudiant,n,matiere,nbre_matiere);

     tmp = (Etudiant*)calloc(n,sizeof(Etudiant));
     tmp = etudiant;
     do{
          menu();
          scanf("%d",&choice);
          //viderBuffer();
          switch (choice)
          {
          case 1:
               printf("\n****Liste des etudiant et de leur mouyenne****\n");
               afficherMoyEtudiant(tmp,n);
               break;
          case 2:
               trierTab(etudiant,n);
               printf("\n****Classement des etudiants par ordre d'excellence****\n");
               afficherMoyEtudiant(etudiant,n);
               break;
          case 3:
               printf("La moyenne de la Salle est : %lf\n",moyenneSalle(tmp,n));
               break;
          case 4:
               trierTab(etudiant,n);
               printf("\n****Liste des trois meilleurs etudiants****\n");
               afficherMoyEtudiant(etudiant,3);
               break;
          case 5:
               trierTab(etudiant,n);
               printf("L'etudiante ayant la meilleur moyenne est :\n");
               afficherMeilleureEtudiante(etudiant,n);
               break;
          default:
               printf("Veuillez saisir une option valide\n");
               break;
          }
     }while(choice!=0);
    
     for (int i = 0; i < nbre_matiere; i++)
     {
          free(etudiant[i].notes);
          free(etudiant[i].moyenneMatiere);
     }

     for (int i = 0; i < nbre_matiere; i++)
     {
          free(tmp[i].notes);
          free(tmp[i].moyenneMatiere);
     }
     free(tmp);
     free(etudiant);
     free(matiere);

}