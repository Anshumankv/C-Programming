#include<stdio.h>
int main() {
    
    int a; 
    printf("Enter number 1: ",a);
    scanf("%d", &a);
    int b;
    printf("Enter number 2: ",a);
    scanf("%d", &b);
    int c = a + b;
    printf("Sum is %d \n", c);
    printf("Done \n");
    return 0;
}