
void trierTab(Etudiant*,int);

void trierTab(Etudiant *etudiant,int n)
{
    Etudiant tmp;

    for (int i = n-1; i > 0; i--)
    {
        for (int j = 0; j <= i ; j++)
        {
            if (etudiant[j].moyenneEtudiant < etudiant[j+1].moyenneEtudiant)
            {
                tmp = etudiant[j];
                etudiant[j]=etudiant[j+1];
                etudiant[j+1]=tmp;
            }
            
        }
        
    }
    
}