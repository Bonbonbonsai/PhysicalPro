#include <stdio.h>
#include <math.h>
double perimeter(double a, double b, double c) {
    return a + b + c;
}

double area(double a, double b, double c) {
    return 0.5*b*a;
}

int main() {
    double a, b, c;
    scanf("%lf %lf", &a, &b);
    c = sqrt(a*a + b*b);
    printf("Perimeter: %.2lf\n", perimeter(a, b, c));
    printf("Area: %.2lf\n", area(a, b, c));
}