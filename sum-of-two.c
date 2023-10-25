#include <stdio.h>

int add (int x, int y){
    return x+y;
}

int main (){
    int a,b;
    printf ("Enter first number: ");
    scanf ("%d", &a);

    printf ("Enter second number: ");
    scanf ("%d", &b);

    int sum= add(a,b);

    printf ("The sum is: %d", sum);

    return 0;

}