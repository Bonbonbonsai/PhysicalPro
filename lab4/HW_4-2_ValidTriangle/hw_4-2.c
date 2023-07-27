#include <stdio.h>
int main() {
    float a_value, b_value, c_value;
    scanf("%f%f%f", &a_value, &b_value, &c_value);
    if (((b_value + c_value) > a_value)
    && ((a_value + c_value) > b_value)
    && ((a_value + b_value) > c_value)) {
        printf("Triangle is valid.");
    }
    else
        printf("Triangle is not valid.");
    return 0;
}