#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char crypt[] = "ABXYPQRMNCEDKLJOSHTUFVZGWIABXYP";
    char string[200];
    char decrypt[200];
    scanf("%[^\n]", string);
    int string_len = strlen(string);
    int crypt_len = strlen(crypt);
    for (int i = 0; i < string_len; i++) {
        if (!isalpha(string[i])) {
            decrypt[i] = string[i];
        }
        else {
            char upper_letter = toupper(string[i]);
            for (int j = 0; j < crypt_len; j++) {
                if (upper_letter == crypt[j]) {
                    decrypt[i] = crypt[(j+5)];
                    break;
                }
            }
            if (islower(string[i])) {
                decrypt[i] = tolower(decrypt[i]);
            }
        }
    }
    for (int k = 0; k < string_len; k++) {
        printf("%c", decrypt[k]);
    }
    return 0;
}