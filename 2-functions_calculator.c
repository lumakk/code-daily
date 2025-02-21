#include <stdio.h>

// function prototype
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);


// main function
int main(){

    int num1, num2;

    printf("Enter the first integer: \n");
    scanf("%d", &num1);

    printf("Enter the second integer: \n");
    scanf("%d", &num2);

    printf("Addition: %d \n", add(num1, num2));
    printf("Subtraction: %d \n", subtract(num1, num2));
    printf("Multiplication: %d \n", multiply(num1, num2));
    printf("Division: %.2f \n", divide(num1, num2));

    return 0;
}

int add(int a, int b){
    return a + b;
}

int subtract(int a, int b){
    return a - b;
}

int multiply(int a, int b){
    return a * b;
}

float divide(int a, int b){
    if (b != 0)
    {
        return (float) a / b;
    } else {
        printf("Error: Division by zero\n");
        return 0;
    }

}

