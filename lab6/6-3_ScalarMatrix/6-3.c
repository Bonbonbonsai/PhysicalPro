#include <stdio.h>
#include <stdbool.h>
int main() {
    double mat[3][3];
    bool check = true;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%lf", &mat[i][j]);
        }
    }
    if ((mat[0][0] == mat[1][1] 
        && mat[1][1] == mat[2][2] 
        && mat[0][0] == mat[2][2])) {
        if (mat[0][1] == 0 &&
            mat[0][2] == 0 &&
            mat[1][2] == 0 &&
            mat[1][0] == 0 &&
            mat[2][0] == 0 &&
            mat[2][1] == 0 ) {
                printf("This is a scalar matrix");
            }
        else {
            printf("This is not a scalar matrix");
        }
    }
    else {
        printf("This is not a scalar matrix");
    }
    return 0;
}