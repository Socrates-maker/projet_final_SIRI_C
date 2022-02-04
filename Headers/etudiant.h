typedef struct Etudiant Etudiant;


struct Etudiant{
    int id;
    char nom[100];
    char prenom[100];
    char sexe;
    int age;
    double **notes;
    double *moyenneMatiere;
    double moyenneEtudiant;
};