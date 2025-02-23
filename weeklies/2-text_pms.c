#include <stdio.h>

char user[255];
char pass[255];

int main(){
    char menuInput;
    
    printf("Welcome to tPMS!\n");
    printf("1. Login\n2. Sign In\n");
    printf("Input: ");
    scanf("%c", &menuInput);

    if (menuInput == '1') {
        login();
    } else if (menuInput == '2') {
        sign_in();
    } return 0;
    
}

void login(){
    char loginUser[255];
    char loginPass[255];

    printf("Login:\nUsername:");
    scanf("%s", &loginUser);

    printf("Login:\nPassword:");
    scanf("%s", &loginPass);

    if (loginUser == user && loginPass == pass)
    {
        printf("Login Successful!");
    } else if (loginUser != user || loginPass != pass) {
        printf("Login Unsuccessful!");
    }
    
}

void sign_in(){
    printf("Sign In:\nUsername:\n");
    scanf("%s", &user);

    printf("Sign In:\nPassword:\n");
    scanf("%s", &pass);
}
