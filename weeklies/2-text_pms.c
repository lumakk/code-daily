#include <stdio.h>
#include <string.h>

// Function declarations
void login();
void sign_in();

char user[255];
char pass[255];

int main() {
    char menuInput;

    printf("Welcome to tPMS!\n");
    printf("1. Login\n2. Sign In\n");
    printf("Input: ");
    scanf(" %c", &menuInput); // Add a space before %c to consume any trailing newline

    if (menuInput == '1') {
        login();
    } else if (menuInput == '2') {
        sign_in();
    } 
    
    return 0;
}

void login() {
    char loginUser[255];
    char loginPass[255];

    printf("Login:\nUsername: ");
    scanf("%s", loginUser);

    printf("Login:\nPassword: ");
    scanf("%s", loginPass);

    if (strcmp(loginUser, user) == 0 && strcmp(loginPass, pass) == 0) {
        printf("Login Successful!\n");
    } else {
        printf("Login Unsuccessful!\n");
    }
}

void sign_in() {
    printf("Sign In:\nUsername: ");
    scanf("%s", user);

    printf("Sign In:\nPassword: ");
    scanf("%s", pass);
}
