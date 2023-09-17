#include <stdio.h>
#include <stdlib.h>
struct node {
    int value;
    struct node *next;
};

void add(struct node * root, int value) {
    struct node * pNew = (struct node *)malloc(sizeof(struct node));

    pNew->value = value;
    pNew->next = NULL;

    struct node * pointer = root;
    while (pointer->next != NULL) {
        pointer = pointer->next;
    }
    pointer->next = pNew;
}

int main() {
    int num, value;
    scanf("%d", &num);
    struct node root;
    root.next = NULL;
    for (int i = 0; i < num; i++) {
        scanf("%d", &value);
        add(&root, value);
    }
    struct node * run = root.next;
    while (run != NULL) {
        printf("%d ", run->value);
        run = run->next;
    }
}