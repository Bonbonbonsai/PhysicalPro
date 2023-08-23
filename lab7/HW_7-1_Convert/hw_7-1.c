#include <stdio.h>
#include <string.h>
#include <ctype.h>

void isSame(char str1[], char str2[]);

void convert(char str[]);

int main() {
    char str1[101], str2[101];
    scanf(" %[^\n]", str1);
    scanf(" %[^\n]", str2);
    printf("*** Results ***\n");
    convert(str1);
    convert(str2);
    printf("***************\n");
    isSame(str1, str2);
    return 0;
}

void isSame(char str1[], char str2[]) {
    for (int i = 0; i < strlen(str1); i++) {
        str1[i] = tolower(str1[i]);
    }
    for (int i = 0; i < strlen(str2); i++) {
        str2[i] = tolower(str2[i]);
    }
    if (strcmp(str1, str2) == 0) {
        printf("Both strings are the same.\n");
    } else {
        printf("Both strings are not the same.\n");
    }
}

void convert(char str[]) {
    for (int i = 0; i < strlen(str); i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        } else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }
    printf("%s\n", str);
}