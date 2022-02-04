double moyenne(double*, int);

double moyenne(double *tab,int n)
{
    double somme;
    for (int i = 0; i < n; i++)
    {
        somme =somme + tab[i];
    }

    return somme/n;
    
}


