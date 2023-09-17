#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

void add(struct node *root, int value) {
    struct node *pNew = (struct node *)malloc(sizeof(struct node));

    pNew->value = value;
    pNew->next = NULL;

    struct node *pointer = root;
    while (pointer->next != NULL) {
        pointer = pointer->next;
    }
    pointer->next = pNew;
}

void insert(struct node *root, int position, int value) {
    struct node *pNew = (struct node *)malloc(sizeof(struct node));
    pNew->value = value;
    
    struct node *prev = root;
    struct node *current = root->next;
    int current_position = 0;
    
    while (current != NULL && current_position < position) {
        prev = current;
        current = current->next;
        current_position++;
    }
    
    pNew->next = current;
    prev->next = pNew;
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
    
    int insert_value, position;
    scanf("%d %d", &insert_value, &position);
    insert(&root, insert_value, position);

    struct node *run = root.next;
    while (run != NULL) {
        printf("%d ", run->value);
        run = run->next;
    }
    return 0;
}