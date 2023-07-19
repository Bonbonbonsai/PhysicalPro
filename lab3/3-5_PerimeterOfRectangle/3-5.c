#include<stdio.h>
int main() {
    double width, longg;
    scanf("%lf%lf", &width, &longg);
    printf("Perimeter of rectangle = %.4lf units", (2*(width + longg)));
    return 0;
}
