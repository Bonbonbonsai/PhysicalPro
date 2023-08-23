#include <stdio.h>
#include <math.h>
double pythagorean(double x, double y) {
    return sqrt(x*x + y*y);
}
int main() {
    double x, y;
    scanf("%lf %lf", &x, &y);
    printf("sqrt(%.0lf^2+%.0lf^2)=%.2lf\n", x, y, pythagorean(x, y));
    return 0;
}
