#include <stdio.h>
#include <stdbool.h>
int main() {
    int num;
    bool check = false;
    int m_array[] = {2, 20, 8, 10, 4, 6, 16, 18};
    int n_array[] = {1, 3, 9, 7, 11, 15, 19};
    while (true) {
        scanf("%d", &num);
        if (num >= 1 && num <= 20) {
            bool check = true;
            for (int i = 0; i <= 7; i++) {
                if (num == m_array[i]) {
                    printf("%d is in M at index [%d]", num, i);
                    return 0;
                }
                if (num == n_array[i]) {
                    printf("%d is in N at index [%d]", num, i);
                    return 0;
                }
            }
            printf("%d is not in neither M nor N", num);
            return 0;
        }
    }
}