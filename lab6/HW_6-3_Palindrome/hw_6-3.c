#include <stdio.h>
#include <string.h>
int main() {
    char string[100], reverse_string[100];
    scanf("%s", string);
    int length = strlen(string);
    for (int i = length - 1; i >= 0; i--) {
        reverse_string[length-i-1] = string[i];
    }
    reverse_string[length] = '\0';
    if (strcmp(string, reverse_string) == 0) {
        printf("It is Palindrome.");
    }
    else {
        printf("It is not Palindrome.");
    }
    return 0;
}