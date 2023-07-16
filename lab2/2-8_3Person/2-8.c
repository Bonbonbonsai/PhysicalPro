#include<stdio.h>
int main() {
    char fname1[100];
    char sname1[100];
    char name2[100];
    char name3[100];
    scanf("%s%s", fname1, sname1);
    scanf(" %[^\n]", name2);
    scanf(" %[^\n]", name3);
    printf("Person 1: %s %s\n", fname1, sname1);
    printf("Person 2: %s\n", name2);
    printf("Person 3: %s\n", name3);
}
