#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char letter;
    char txt[150];
    int count = 0;
    scanf("%c %[^\n]", &letter, txt);
    for (int i = 0; i < strlen(txt); i++) {
        if (tolower(txt[i]) == tolower(letter)) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}