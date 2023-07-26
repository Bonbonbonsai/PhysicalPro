#include <stdio.h>
int main() {
    char letter;
    scanf("%c", &letter);
    if (letter >= 'A' && letter <= 'Z') {
        printf("%c", (letter + 32));
    }
    else if (letter >= 'a' && letter <= 'z') {
        printf("%c", (letter - 32));
    }
    else {
        printf("error");
    }
    return 0;
}