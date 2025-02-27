#include <stdio.h>
#include <string.h>

int main(){
    char string[256];

    printf("Input a string to reverse:\n");
    scanf("%s", string);

    printf("Original string: %s", string);
    printf("\nReversed string: %s", strrev(string));
    getchar(); 

    printf("\nPress ENTER key to Continue\n");  
    getchar(); 

    return 0;

}
