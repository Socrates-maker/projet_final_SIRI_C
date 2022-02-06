void afficherMeilleureEtudiante(Etudiant*,int);

void afficherMeilleureEtudiante(Etudiant *etudiant,int n)
{
   
    int nbr_fille=0,j=0;
    char sexe;
    Etudiant *etudiantes;
    for (int i = 0; i < n; i++)
    {
        sexe = etudiant[i].sexe;
        if ((sexe=='F') || (sexe== 'f'))
        {
            printf("True");
            nbr_fille++;
        }
    }
    etudiantes =(Etudiant*)calloc(nbr_fille,sizeof(Etudiant));
    for (int i = 0; i < n; i++)
    {
        sexe = etudiant[i].sexe;
        if ((sexe=='F') || (sexe== 'f'))
        {
            etudiantes[j]=etudiant[i];
            j++;
        }
    }
    
    afficherMoyEtudiant(etudiantes,1);
    
}