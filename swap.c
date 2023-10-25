//this piece of code won't work due to the concept of passing by value and passing by reference

#include <stdio.h>
int swap (int a, int b){
    a= a+b;
    b= a-b;
    a= a-b;
    
    return a;
    return b;
}

int main(){

    int a,b;

    printf ("Enter the value of a: ");
    scanf ("%d", &a);

    printf ("Enter the value of b: ");
    scanf ("%d", &b);

    int call= swap(&a,&b);

    printf ("Values after swapping, a= %d & b= %d", a, b);

    return 0;

}