#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    int i;
    if (num >= 0) {
        for (i = num; i >= 0; i--) {
            printf("%d ", i);
        }
    }
    else if (num < 0) {
        for (i = num; i <= 0; i++) {
            printf("%d ", i);
        }
    }
    return 0;
}