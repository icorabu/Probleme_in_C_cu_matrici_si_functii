//matricea transpusa (n linii si m coloane)
//inversam liniile cu coloanele

#include <stdio.h>

#define MAX 30

//functia de citire matrice
void citireMatrice(int n, int m, int a[][MAX]){
    int i,j;
    for(i=0;i<n;i++)
        for(j=0;j<m;j++){
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
}
//functia afisare matrice
void afisareMatrice(int n, int m, int a[][MAX]){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
//functia de construire transpusa
void transpusa(int n, int m, int a[][MAX], int t[][MAX]){
    int i,j;
    for(i=0;i<n;i++)
        for(j=0;j<m;j++){
            t[i][j] = a[j][i];
        }
    
}

void main(){
    int n,m,a[MAX][MAX],t[MAX][MAX];
    printf("n = ");scanf("%d",&n);
    printf("m = ");scanf("%d",&m);
    citireMatrice(n, m, a);
    afisareMatrice(n, m, a);
    printf("----------\n");
    transpusa(n, m, a, t);
    afisareMatrice(n, m, t);
}
