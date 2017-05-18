// Basic linked-list structure
#include <stdio.h>
#include <stdlib.h>
struct node {
    long num;
    struct node* next;
};

// initialize the linked list (allocate space)
void list_init(struct node **head){
    *head = (struct node *)malloc(sizeof(struct node));
    (*head)->num = 0;
    (*head)->next = NULL;
}

// append to the end of the list
void list_append(struct node** head, long num){
    struct node *newNode = (struct node *)malloc(sizeof(struct node));


    newNode->num = num;
    newNode->next = NULL;

    if (*head == NULL) {

        (*head) = newNode;

    } else {

        struct node *scan = *head;
        while (scan->next != NULL){
            scan = scan->next;
        }

        scan->next = newNode;

    }

    //GRADER: Here, you are creating a new node, but you aren't linking it to the original list in
    //any way. I believe this is why your program has memory leak issues and therefore is not running
    //properly.

}

// print the elements in the list
void list_print(struct node* head){

    struct node* scan;
    scan = head;
    while (scan!= NULL) {
        printf("%d", (int) scan->num);
        scan = scan->next;
    }
}

// free the memory used by the list
void list_free(struct node* head){

    struct node* scan;

    while(head != NULL){
        scan = head;
        head = head->next;
        free(scan);
    }
}

// return the number of elements in the list
int  list_count(struct node* head) {

    int count= 0;
    struct node *scan;
    scan = head;
    while (scan!= NULL) {
        count++;
        scan = scan->next;
    }

    return count;
}
