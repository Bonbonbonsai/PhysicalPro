#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
    char txt[150];
    scanf("%[^\n]", txt);
    for (int i = 0; i < strlen(txt); i++) {
        if (isspace(txt[i])) {
            continue;
        }
        else {
            printf("%c", txt[i]);
        }
    }
    printf("\n");
    return 0;
}