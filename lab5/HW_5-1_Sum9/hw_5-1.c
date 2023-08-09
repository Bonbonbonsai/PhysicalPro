#include <stdio.h>
int main() {
    int num = 0;
    int sum = 0;
    while (num != -9) {
        sum += num;
        scanf("%d", &num);
    }
    printf("%d", sum);
    return 0;
}