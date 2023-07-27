#include <stdio.h>
#include <ctype.h>
int main() {
    char value;
    scanf("%c", &value);
    if (isdigit(value)) {
        printf("number");
    }
    else if (islower(value))
        printf("lowercase");
    else if (isupper(value))
        printf("uppercase");
    else
        printf("error");
    return 0;
}