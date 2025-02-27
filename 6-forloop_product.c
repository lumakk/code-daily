#include <stdio.h>

int main(){

    int n, i = 1;
    unsigned long long product = 1;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while (i <= n)
    {
        product *= i;
        i++;
    } printf("Factorial of %d = %llu", n, product);
    

    return 0;
}