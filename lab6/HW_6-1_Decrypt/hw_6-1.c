#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char upper_crypt[] = "ABXYPQRMNCEDKLJOSHTUFVZGWIABXYP";
    char lower_crypt[] = "abxypqrmncedkljoshtufvzgwiabxyp";
    char string[200];
    scanf("%[^\n]", string);
    for (int i = 0; i < strlen(string); i++) {
        for (int j = 0; j < strlen(upper_crypt); j++) {
            if (isspace(string[i])) {
                printf(" ");
            }
            else if (islower(string[i])) {
                if (strcmp(string[i], lower_crypt[j]) == 0) {
                    printf("%s", lower_crypt[j+5]);
                }
            }
            else {
                if (strcmp(string[i], upper_crypt[j]) == 0) {
                    printf("%s", upper_crypt[j+5]);
                }
            }
        }
    }
    printf("\n");
    return 0;
}