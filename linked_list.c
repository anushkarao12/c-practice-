#include<stdio.h>
#include<stdlib.h>

struct LinkedList {
    int value;
    struct LinkedList *next;
};

int main() {
    int length = 10;
    struct LinkedList *head = NULL;
    struct LinkedList *tail = NULL;

    // create a Link list
    for (int i = 0; i < length; i++) {
         struct LinkedList *newNode = malloc(sizeof(struct LinkedList));
         newNode->value = rand() % 1000;
         if (head == NULL) {
            head = newNode;
         } else {
            tail->next = newNode;
         }
         tail = newNode;
    }

    struct LinkedList *curr = head;
     // traverse a Link list
    while (curr->next != NULL ) {
         printf("%d->", curr->value);
         curr = curr->next;
    }
    printf("\n");

    int deleteNodeValue = 923;

    struct LinkedList *curr_previous = NULL;
    curr = head;

     printf("Perform deletee \n");
     for (int i = 0; i < length; i++) {
        if (curr->value == deleteNodeValue) {
            
            // first element to be deleted
            if (curr_previous == NULL) {
                head = curr->next;
                curr->next = NULL;
                free(curr);
            }
            // last element to be deleted 
            else if (curr->next == NULL) {
                tail = curr_previous;
                curr_previous->next = NULL;
                free(curr);
            }
            // somewhere in the middle 
            else {
                printf("found \n");
                 curr_previous->next  = curr->next;
                 curr->next = NULL;
                 printf("call free \n");
                 free(curr);
                 printf("call free suceesss \n");
            }

            if (head == NULL) {
                tail = NULL;
            }
            break;
        } else {
            curr_previous = curr;
            curr = curr->next;
        }
    }

    curr = head;
     // traverse a Link list
    while (curr->next != NULL ) {
         printf("%d->", curr->value);
         curr = curr->next;
    }
    printf("\n");

}