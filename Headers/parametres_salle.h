
void  parametres_salle(int*,char*,int*);

void parametres_salle(int *n, char nom_filiere[],int *nbre_matiere)
{
    printf("Entrer le nom de la filiere\n");
    lireChaine(nom_filiere,50);
    printf("Entrer l'effectif de la classe\n");
    scanf("%d",n);
    viderBuffer();
    printf("Entrer le nombre de matiere\n");
    scanf("%d",nbre_matiere);
    viderBuffer();
}