//prin interschimbari de linii si coloane
//ordonarea crescator a elementelor de pe diagonala principala
#include <stdio.h>
//#include <conio.h>

#define MAX 100

//L0 indicele primei linii
//L1 indicele celei de-a doua linii

void schimbareLinii(int n, int a[][MAX], int L0, int L1){
    int i,aux;
    for (i=0;i<n;i++){
        aux = a[L0][i];
        a[L0][i] = a[L1][i];
        a[L1][i] = aux;
    }
}

void schimbareColoane(int n, int a[][MAX], int C0, int C1){
    int i,aux;
    for (i=0;i<n;i++){
        aux = a[i][C0];
        a[i][C0] = a[i][C1];
        a[i][C1] = aux;
    }
}

void schimbComplet(int n, int a[][MAX]){
    int i,j;
    for (i=0;i<n-1;i++)
        for (j=1;j<n;j++)
            if (a[i][i]>a[j][j]){
                schimbareLinii(n, a, i, j);
                schimbareColoane(n, a, i, j);
            }
}

void citesteMatrice(int n,int a[][MAX]){
    int i,j;
    for (i=0;i<n;i++)
        for (j=0;j<n;j++){
            printf("a[%d][%d] = ",i,i);
            scanf("%d",&a[i][j]);
        }
}

void afisareMatrice(int n, int a[][MAX]){
    int i,j;
    for (i=0;i<n;i++){
        for (j=0;j<n;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
}

int main(){
    int n,a[MAX][MAX];
    printf("n = ");
    scanf("%d",&n);
    citesteMatrice(n, a);
    afisareMatrice(n, a);
    printf("------------\n");
    schimbComplet(n, a);
    afisareMatrice(n, a);
    printf("------------\n");
    
    return 0;
}
