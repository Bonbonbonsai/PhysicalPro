#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char crypt[] = "ABXYPQRMNCEDKLJOSHTUFVZGWI";
    char string[200];
    char decrypt[200];
    scanf("%[^\n]", string);
    int string_len = strlen(string);
    int crypt_len = strlen(crypt);
    for (int i = 0; i < string_len; i++) {
        if (isspace(string[i])) {
            decrypt[i] = ' ';
        }
        else {
            char upper_letter = toupper(string[i]);
            for (int j = 0; j < crypt_len; j++) {
                if (upper_letter == crypt[j]) {
                    decrypt[i] = crypt[(j+5) % crypt_len];
                    break;
                }
            }
        }
    }
    printf("%s", decrypt);
    return 0;
}