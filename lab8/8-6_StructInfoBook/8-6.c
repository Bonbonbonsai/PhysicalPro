#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    struct student_info {
        char name[60];
        char surname[60];
        char sex[10];
        int age;
        char id[12];
        float gpa;
    };
    struct student_info s;
    scanf("%s %s %s %d %s %f", s.name, s.surname, s.sex, &s.age, s.id, &s.gpa);
    for (int i = 0; i < strlen(s.name); i++) {
        s.name[i] = tolower(s.name[i]);
    }
    for (int i = 0; i < strlen(s.surname); i++) {
        s.surname[i] = tolower(s.surname[i]);
    }
    for (int i = 0; i < strlen(s.sex); i++) {
        s.sex[i] = tolower(s.sex[i]);
    }
    if (strcmp(s.sex, "male") == 0) {
        printf("Mr ");
    } else {
        printf("Miss ");
    }
    s.surname[0] = toupper(s.surname[0]);
    printf("%c %s (%d) ID: %s GPA %.2f"
    , toupper(s.name[0]), s.surname, s.age, s.id, s.gpa);
    return 0;
}