#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    int i = 1;
    while (num >= 1 ) {
        printf("%d ", num);
        num--;
    }
    return 0;
}