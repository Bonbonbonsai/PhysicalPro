#include <stdio.h>
int main() {
    double matrix_a[3][3];
    double matrix_b[3][3];
    double result[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%lf", &matrix_a[i][j]);
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%lf", &matrix_b[i][j]);
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                result[i][j] += matrix_a[i][k]*matrix_b[k][j];
            }
        }
    }
    printf("A x B\n%.2lf %.2lf %.2lf\n%.2lf %.2lf %.2lf\n%.2lf %.2lf %.2lf\n",
            result[0][0], result[0][1], result[0][2],
            result[1][0], result[1][1], result[1][2],
            result[2][0], result[2][1], result[2][2]);
    return 0;
}