#include <stdio.h>
#include <string.h>
int main() {
    char str[200];
    scanf("%s", str);
    int num[200];
    int size = strlen(str);
    // change char to integer
    for (int i = 0; i < size; i++) {
        num[i] = str[i];
    }
    // bubble sort
    for (int i = 0; i < size; i++) {
        int min_index = i;
        for (int j = i+1; j < size; j++) {
            if (num[min_index] > num[j]) {
                min_index = j;
            }
        }
        int temp = num[i];
        num[i] = num[min_index];
        num[min_index] = temp;
    }
    // print sorted array
    for (int i = 0; i < size; i++) {
        printf("%c", num[i]);
    }
    printf("\n");
    return 0;
}