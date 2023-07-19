#include<stdio.h>
int main() {
    float num1, num2, num3, num4;
    scanf("%f%f%f%f", &num1, &num2, &num3, &num4);
    
    float sum_result = num1 + num2 + num3 + num4;
    float average_result = sum_result/4;

    printf("Summation is %.2f\n", sum_result);
    printf("Average is %.3f", average_result);

    return 0;
}
