#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} node_t;

node_t *head_node = NULL;

int insertElementAtFront(int data) {
    node_t* newNode = (node_t*)malloc(sizeof(node_t));
    if (newNode == NULL) {
        return 1; // Memory allocation failed
    }
    newNode->data = data;
    newNode->next = head_node;
    head_node = newNode;
    return 0;
}

int cycleDetectionInLL(){
    node_t* fast_pointer= head_node;
    node_t* slow_pointer= NULL;

    while(fast_pointer != NULL && fast_pointer->next != NULL){

        fast_pointer= fast_pointer->next->next;
        slow_pointer= slow_pointer->next;

        if(fast_pointer == slow_pointer){
            printf("cycle detected");
            return 1;
        }
        else{
            printf("no cycle in LL");
            return 0;
        }

    }

}


int printElements() {
    node_t *currentNode = head_node;
    if (currentNode == NULL) {
        printf("List is empty\n");
        return 1;
    }
    while (currentNode != NULL) {
        printf("%d\t", currentNode->data);
        currentNode = currentNode->next;
    }
    printf("\n");
    return 0;
}

int deleteElement(int data) {
    node_t* current_node = head_node;
    node_t* previous_node = NULL;

    while(current_node != NULL){
        if(current_node->data == data){  // data =29 // prev_node= NULL
            if(previous_node == NULL){
                head_node= current_node->next;
            }
            else{
                previous_node->next= current_node->next; // u r trying to dereference the NULL pointer - seg fault
            }
        }
        previous_node= current_node;
        current_node= current_node->next;
        
    }
   return 0;
}

int main(int argc, char *argv[]) {
    insertElementAtFront(20);
    insertElementAtFront(25);
    insertElementAtFront(29);
    printf("Elements in LL before deletion:\n");
    printElements();

    deleteElement(29);
    printf("Elements in LL after 1st deletion:\n");
    printElements();


    deleteElement(20);
    printf("Elements in LL after 2nd deletion:\n");
    printElements();

    return 0;
}
