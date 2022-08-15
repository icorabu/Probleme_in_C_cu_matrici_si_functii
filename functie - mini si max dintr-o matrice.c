//valoare minima si maxima dintr-o matrice
//cu n linii si m coloane

#include <stdio.h>
#define MAX 30

//functia de calculare minim

int minim(int n, int m, int a[][MAX]){
    int i,j,min;
    for (i=0;i<n;i++)
        for (j=0;j<m;j++){
            if (a[i][j]<min)
                min = a[i][j];
        }
    return min;
}

//functia de calculare maxim

int maxim(int n,int m, int a[][MAX]){
    int i,j,max;
    for (i=0;i<n;i++)
        for (j=0;j<m;j++){
            if (a[i][j]>max)
                max = a[i][j];
        }
    return max;
}

//functia de citire matrice

void citireMatrice(int n, int m, int a[][MAX]){
    int i,j;
    for(i=0;i<n;i++)
        for (j=0;j<m;j++){
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
}

int main(){
    int n,m,min,max;
    int a[MAX][MAX];
    printf("n = ");scanf("%d",&n);
    printf("m = ");scanf("%d",&m);
    citireMatrice(n, m, a);
    min = minim(n, m, a);
    max = maxim(n, m, a);
    printf("Minimul = %d\nMaximul = %d\n",min,max);
}
