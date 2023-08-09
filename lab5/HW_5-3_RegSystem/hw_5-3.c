#include <stdio.h>
int main() {
    int age, height, weight;
    int ans_1 = 0, ans_2 = 0, ans_3 = 0, ans_4 = 0, total_age = 0;
    float total_height = 0, total_weight = 0;
    for (int i = 0; i < 50; i++) {
        scanf("%d %d %d", &age, &height, &weight);
        if (age >= 20) {
            if (height >= 160) {
                ans_1 += 1;
            }
        }
        if (age < 20) {
            if (height <= 180 || weight >= 60) {
                ans_2 += 1;
            }
        }
        if (age >= 30) {
            if (weight >= 40 && weight <= 80) {
                ans_3 += 1;
            }
        }
        if (age < 40) {
            if (weight <= 85 || height <= 200) {
                ans_4 += 1;
            }
        }
        total_age += age;
        total_height += height;
        total_weight += weight;
    }
    printf("Age >= 20 and Height >= 160: %d\n", ans_1);
    printf("Age < 20 and Height <= 180 or Weight >= 60: %d\n", ans_2);
    printf("Age >= 30 and Weight >= 40 and Weight <= 80: %d\n", ans_3);
    printf("Age < 40 and Weight < 85 or Height <= 200: %d\n", ans_4);
    printf("Average Age: %d\n", total_age/50);
    printf("Average Height: %.2f\n", total_height/50);
    printf("Average Weight: %.2f", total_weight/50);
    return 0;
}
