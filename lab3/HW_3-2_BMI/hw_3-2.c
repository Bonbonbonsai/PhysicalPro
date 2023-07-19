#include<stdio.h>
int main() {
    float height, weight;
    scanf("%f%f", &height, &weight);
    height /= 100;
    printf("%f", weight/(height*height));
    return 0;
}
