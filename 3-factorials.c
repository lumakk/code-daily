#include <stdio.h>

int main(){

    int n, i;
    unsigned long long factorial = 1;

    printf("Enter a non-negative Integer number:\n");
    scanf("%d", &n);

    if (n < 0) {
        printf("Number is a negative integer number!");
    } else {
        for (i = 1; i <= n; ++i)
        {
            factorial *= i;
        }
        printf("Factorial of %d = %llu", n, factorial);
    }
    
    return 0;

}
