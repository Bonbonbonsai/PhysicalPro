#include <stdio.h>
#include <ctype.h>
double celsiusToFahrenheit(double celcius) {
    return celcius * 9 / 5 + 32;
}

double fahrenheitToCelcius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

void printFarenheit(double fahrenheit) {
    printf("%.2lf f\n", fahrenheit);
}

void printCelcius(double celcius) {
    printf("%.2lf c\n", celcius);
}

int main() {
    double num;
    char unit[1];
    scanf("%lf %s", &num, unit);
    unit[0] = tolower(unit[0]);
    if (unit[0] == 'c') {
        printFarenheit(celsiusToFahrenheit(num));
    } else if (unit[0] == 'f') {
        printCelcius(fahrenheitToCelcius(num));
    }
    return 0;
}
