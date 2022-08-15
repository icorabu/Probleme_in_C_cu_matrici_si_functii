#include <stdio.h>
int suma_elemente(int n, int a[100][100]){
    int vector1[2*n-1];
    int c = 0;
    for(int i = 0;i<2*n-1;i++){
        for (int k=i,g=0;k>=0;k--,g++){
            vector1[c] += a[g][k];
            c++;
        }
    }
    for (int i=1;i<n;i++){
        for (int k=n-1,g=1;g<n-1;k--,g++){
            vector1[c] += a[g][k];
            c++;
        }
    }
    return vector1;
    
}
int main(){
    int n,a[100];
    suma_elemente(n, a);
    return 0;
}
