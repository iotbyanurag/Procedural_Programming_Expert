#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void printElementsLinkedList();
int insertElementAtFront(int val);
int deleteAnElement(int val);

typedef struct node{
    int data;
    struct node *next;
}node_t;

node_t *head_node = NULL;

int main(int argc, char *argv[]){

    insertElementAtFront(12);
    insertElementAtFront(24);
    insertElementAtFront(36);
    printElementsLinkedList();

    deleteAnElement(36);
    printElementsLinkedList();

    return 0;
}

int insertElementAtFront(int val){

    node_t *new_node= malloc(sizeof(node_t));
    if(new_node == NULL){
        printf("failed to allocate memory");
        return 1;
    }
    new_node->next= head_node;
    new_node->data= val;
    head_node= new_node;

}

int deleteAnElement(int val){
    node_t *curr_node=head_node, *prev_node= NULL;
    
    while(curr_node != NULL){
        if(curr_node->data == val){
            if(prev_node != NULL) {
                prev_node->next = curr_node->next; // actual deletion takes place
                // i.e. removing link from the current node - which is the search result of value
            } else {
                // This handles deletion at the head.
                head_node = curr_node->next;
            }
            free(curr_node);
            return 0;  // return after first deletion, assuming you only want to delete one occurrence.
        } else {
            prev_node = curr_node;
            curr_node = curr_node->next;
        }
    }
    printf("Element %d not found.\n", val);
    return -1;  // return an error code or message indicating that the element was not found.
}


void printElementsLinkedList(){
    node_t *current_node= head_node; //12
     if (head_node == NULL) {
        printf("The list is empty\n");
        return;
    }
    while(current_node != NULL){
      
        printf("%d\t",current_node->data);
        current_node= current_node->next;
        
    }
    printf("\n");

    
}