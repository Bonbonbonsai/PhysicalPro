#include <stdio.h>
#include <math.h>

double topHeight(double d, double u);

int main() {
    double degree, velocity, height;
    scanf("%lf %lf", &degree, &velocity);
    height = topHeight(degree, velocity);
    printf("theta (degree) : %.0lf\n", degree);
    printf("u (m/s) : %.0lf\n", velocity);
    printf("h (m) : %.4lf\n", height);
    return 0;
}

double topHeight(double d, double u) {
    double pi = 3.141592653589793;
    double radian = (d * pi)/180;
    return ((u*u) * (sin(radian)*sin(radian))) / (2*9.81);
}