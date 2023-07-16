#include<stdio.h>
int main() {
    int num, digit1, digit2, digit3, digit4, digit5;
    scanf("%d", &num);

    digit1 = num / 10000;
    num = num % 10000;

    digit2 = num / 1000;
    num = num % 1000;

    digit3 = num / 100;
    num = num % 100;

    digit4 = num / 10;

    digit5 = num % 10;
    
    printf("%d%d%d%d%d", digit3, digit4, digit5, digit1, digit2);
    return 0;
}
