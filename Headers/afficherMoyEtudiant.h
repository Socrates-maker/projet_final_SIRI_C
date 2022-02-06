void afficherMoyEtudiant(Etudiant*,int);

void afficherMoyEtudiant(Etudiant *etudiant,int n)
{
    for (int i = 0; i < n; i++)
    {
         //printf("Etudiant numero %d\n",etudiant[i].id);
         printf("Nom : %s\nPrenom: %s \nSexe : %c \nAge : %d \n",etudiant[i].nom,etudiant[i].prenom,etudiant[i].sexe,etudiant[i].age);
         /*for (int j = 0; j < nbre_matiere; j++)
         {
              printf("\nMoyenne de l'etudiant dans la matiere %s\n", matiere[j].nom);
              printf("%lf",etudiant[i].moyenneMatiere[j]);
         }*/
         printf("\nMoyenne genarale : %lf\n",etudiant[i].moyenneEtudiant);
         printf("\n------------\n");
         
     }
}