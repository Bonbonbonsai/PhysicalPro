#include <stdio.h>
int main() {
    int start, stop;
    scanf("%d %d", &start, &stop);
    int i;
    if (start > stop) {
        for (i = start; i >= stop; i--) {
            printf("%d ", i);
        }
    }
    else if (stop > start) {
        for (i = start; i <= stop; i++) {
            printf("%d ", i);
        }
    }
    return 0;
}