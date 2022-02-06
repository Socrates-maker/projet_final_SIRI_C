double moyenneSalle(Etudiant*,int);

double moyenneSalle(Etudiant *etudiant,int n)
{
    double *moyennes;
    double moySalle;
    moyennes = (double*)calloc(n,sizeof(double));

    for (int i = 0; i < n; i++)
    {
        moyennes[i] = etudiant[i].moyenneEtudiant;
    }

    moySalle = moyenne(moyennes,n);
    free(moyennes);

    return moySalle;
     
}