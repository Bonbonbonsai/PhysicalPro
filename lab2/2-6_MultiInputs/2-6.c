#include<stdio.h>
int main() {
    char txt1[30], txt2[30], txt3[30], txt4[30];
    scanf("%s %s %s %s", txt1, txt2, txt3, txt4);
    printf("String 1: %.3s\n", txt1);
    printf("String 2: %.4s\n", txt2);
    printf("String 3: %.5s\n", txt3);
    printf("String 4: %.6s\n", txt4);
    return 0;
}