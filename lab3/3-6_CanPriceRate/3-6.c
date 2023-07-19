#include<stdio.h>
int main() {
    double price, distance, height;
    scanf("%lf%lf%lf", &price, &distance, &height);
    double radius = distance/2;
    double volume = height*3.14159265359*(radius*radius);
    double bahtPerMl = price/volume;
    printf("Volume : %.2lfml\n", volume);
    printf("Baht/ml : %.4lf", bahtPerMl);
    return 0;
}
