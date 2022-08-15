//produsul a doua matrici
//cu functii
#include <stdio.h>

//am nevoie de functie pt citire matrice
//o functie pentru calcul produs
//o functie pentru afisare matrice

//c = litera asociata matricii, utilizata pentru afisare
#include <stdio.h>
#define LINII 10
#define COLOANE 10
void readMatrice(int a[][COLOANE], int n, int m, char c){
    int i,j;
    for (i=0;i<n;i++)
        for(j=0;j<m;j++){
            printf("%c[%d][%d] = ",c,i,j);
            scanf("%d",&a[i][j]);
        }
}
void produs(int a[][COLOANE], b[][COLOANE], c[][COLOANE], int n, int m, int p){
    int i,j,k;
    for (i=0;i<n;i++)
        for (j=0;j<p;j++){
            c[i][j] = 0;
            for (k=0;k<m;k++)
                c[i][j] += a[i][k]*b[i][j];
        }
}
void afisareMatrice(int a[][COLOANE],int n,int m){
    int i,j;
    for (i=0;i<n;i++){
        for (j=0;j<m;j++)
            printf("%d ",a[i][j]);
    printf("\n");
    }
}

int main(){
    int n,m,p;
    int a[LINII][COLOANE], b[LINII][COLOANE],c[LINII][COLOANE];
    
    printf("n = ");scanf("%d",&n);
    printf("m = ");scanf("%d",&m);
    readMatrice(a, n, m, 'a');
    
    printf("p = ");scanf("%d",&p);
    readMatrice(b, m, p, 'b');
    
    produs(a, b, c, n, m, p);
    printf("----------\n");
    
    afisareMatrice(a, n, m);
    printf("----------\n");
    
    afisareMatrice(b, m, p);
    printf("----------\n");
    
    afisareMatrice(c, n, p);
    printf("----------\n");
    
    return 0;
}
