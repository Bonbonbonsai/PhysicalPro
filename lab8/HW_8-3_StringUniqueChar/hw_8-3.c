#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main() {
    char txt[150];
    scanf("%[^\n]", txt);
    char txtBefore[150];
    strcpy(txtBefore, txt);
    bool isRemove = true;
    while (isRemove) {
        int len = strlen(txt);
        int j = 0;
        for (int i = 0; i < len; i++) {
            if ((i < len - 1) && (txt[i] == txt[i + 1])) {
                i++;
            } else if (txt[i] != ' ') {
                txt[j++] = txt[i];
            }
        }
        txt[j] = '\0';
        isRemove = strcmp(txtBefore, txt) != false;
        if (isRemove) {
            printf("%s\n", txt);
            strcpy(txtBefore, txt);
        }
    }
    return 0;
}