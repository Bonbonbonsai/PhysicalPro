#include<stdio.h>
int main() {
    char name[30];
    char surname[30];
    int student_id;
    int day, month, year;
    float gpa;
    scanf("%s\n%s", name, surname);
    scanf("%d", &student_id);
    scanf("%d/%d/%d", &day, &month, &year);
    scanf("%f", &gpa);
    printf("Fullname: %s %s\n", name, surname);
    printf("ID: %d\n", student_id);
    printf("DOB: %02d-%02d-%d\n", day, month, year);
    printf("GPA: %.2f\n", gpa);
    return 0;
}
