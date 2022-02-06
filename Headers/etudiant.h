typedef struct Etudiant Etudiant;


struct Etudiant{
    int id;
    char nom[30];
    char prenom[30];
    char sexe;
    int age;
    double **notes;
    double *moyenneMatiere;
    double moyenneEtudiant;
};