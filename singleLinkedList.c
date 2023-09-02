#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void printElementsLinkedList();
int insertElementAtFront(int val);


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

    
}