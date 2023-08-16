#include <stdio.h>
#include <string.h>
int main() {
    char sentence[100], reverse[100];
    scanf("%[^\n]s", sentence);
    int length = strlen(sentence);
    for (int i = length - 1; i >= 0; i--) {
        reverse[length-i-1] = sentence[i];
    }
    printf("%s", reverse);
    return 0;
}