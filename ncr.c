#include <stdio.h>

int factorial (int x){
    int fact= 1;
    for (int i=1; i<=x; i++){
    fact= fact*i;
}
    return fact;
}

int combination (int n, int r){
    int ncr= (factorial(n))/((factorial(r))*(factorial(n-r)));
    return ncr;
}

int main (){
    
    int n,r;

    printf ("Enter value of n: ");
    scanf ("%d", &n);

    printf ("Enter value of r: ");
    scanf ("%d", &r);

    int ncr= combination(n,r);

    printf ("nCr= %d", ncr);

    return 0;

}