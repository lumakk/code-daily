#include <stdio.h>

int main(){

    int input;

    printf("Enter a number: ");
    scanf("%d", &input);

    for (int i = 0; i <= 10; i++)
    {
        printf("%d x %d = %d\n", input, i, input * i);
    }
    

    return 0;
}