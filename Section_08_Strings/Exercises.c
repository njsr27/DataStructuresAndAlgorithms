#include "stdio.h"

void introduction(){
    char* message = "Hello world!";

    printf("%s", message);
}

void String_Length(const char* word){
    int i;

    for (i = 0 ; word[i] != '\0'; ++i) {}

    printf("Length of the word is: %d", i);
}

void String_ToLowerCase(){
    char word[] = "WELCOME";
    int i;

    for (i = 0 ; word[i] != '\0'; i++) {
        word[i] = word[i] + 32;
    }

    printf("Word in lower case is: %s", word);
}