#include <stdio.h>
#include <string.h>
struct Record {
    char id[10];
    char name[100];
    long salary;
    long sales;
};

int main() {
    int n;
    scanf("%d", &n);
    struct Record rec[n];
    for (int i = 0; i < n; i++) {
        scanf("%s %s %ld %ld", rec[i].id, rec[i].name, &rec[i].salary, &rec[i].sales);
    }
    char selectId[10];
    scanf("%s", selectId);
    for (int i = 0; i < n; i++) {
        if (strcmp(selectId, rec[i].id) == 0) {
            double com = rec[i].sales * 0.02;
            double totalSalary = rec[i].salary + com;
            printf("%s\n%s\n%ld\n%.2lf\n%ld\n%.2lf\n",
                rec[i].id, rec[i].name, rec[i].sales, com, rec[i].salary, totalSalary);
            return 0;
        }
    }
    printf("ID not found !!!");
    return 0;
}