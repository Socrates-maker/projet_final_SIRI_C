void  parametres_salle(int*,char*,int*);

void parametres_salle(int *n, char nom_filiere[],int *nbre_matiere)
{
    printf("Entrer le nom de la filiere\n");
    fgets(nom_filiere,50,stdin);
    printf("Entrer l'effectif de la classe\n");
    scanf("%d",n);
    printf("Entrer le nombre de matiere\n");
    scanf("%d",nbre_matiere);
}