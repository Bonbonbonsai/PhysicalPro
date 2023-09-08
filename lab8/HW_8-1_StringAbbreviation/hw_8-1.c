#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char firstName[200], lastName[200];
    scanf("%s %s", firstName, lastName);
    printf("%c.%c.\n", toupper(firstName[0]), toupper(lastName[0]));
    return 0;
}