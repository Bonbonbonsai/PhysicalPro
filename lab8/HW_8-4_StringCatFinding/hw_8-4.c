#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char txt[2000];
    int cat_index[2000];
    scanf("%[^\n]", txt);
    int size = strlen(txt);
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (isupper(txt[i])) {
            txt[i] = tolower(txt[i]);
        }
    }
    for (int i = 0; i < size; i++) {
        if (txt[i] == 'c' &&
            txt[i+1] == 'a' &&
            txt[i+2] == 't') {
            cat_index[count] = i;
            count++;
        }
    }
    for (int i = 0; i < count; i++) {
        printf("%d", cat_index[i]);
        if (i < count-1) {
            printf(", ");
        }
    }
    printf("\n");
    return 0;
}