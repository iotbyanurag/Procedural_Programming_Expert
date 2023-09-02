#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


typedef struct node{
    int data;
    struct node *next;
}node_t;

typedef enum position{
    FRONT=0,
    MIDDLE,
    END,
    PRINT
}position_t;

void printElementsLinkedList();

int insertElementAtPosition(int val, position_t pos);
int deleteAnElement(int val);

node_t *head_node = NULL;
node_t *end_node= NULL;

int main(int argc, char *argv[]){

    
insertElementAtPosition(12,FRONT);
insertElementAtPosition(24,FRONT);
insertElementAtPosition(36,FRONT);
insertElementAtPosition(48,FRONT);
insertElementAtPosition(99,END);
insertElementAtPosition(105,END);
insertElementAtPosition(124,FRONT);
printElementsLinkedList();
deleteAnElement(24);
printElementsLinkedList();
    return 0;
}

int insertElementAtPosition(int val, position_t pos){

    node_t *new_node= malloc(sizeof(node_t));
    // node_t *current_node= NULL, *prev_node=NULL;
    printf("case is %d\n ", pos);
    printf("input number is %d\n ", val);
    switch(pos) {
    case FRONT:
        new_node->data= val;
        new_node->next= head_node;
        head_node= new_node;
        goto PRINT;  // directly jump to PRINT case
    case MIDDLE:
        // Do something else
        break;
    case END:
        
        /*
            Head
             |
             12 ---> 24 ----> 48 ----> 56 ----> NULL

             end_node 
               |   |
              56  NULL

             new_node
               |   |
               99  Next



            
        */

        node_t *current_node= head_node;
        while(current_node->next != NULL){
            current_node= current_node->next;
        }
        end_node= current_node;
        printf("end node data %d\n",end_node->data);

        new_node->data= val;
        new_node->next= NULL;
        end_node->next= new_node;
        // Do something else
        break;
    PRINT:
        printf("head_node %d\n", head_node->data);
        break;
    default:
        // Handle other cases, if necessary
        break;
}


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
    // define a start point atleast
    current_node= head_node;
    while(current_node != NULL){
        printf("%d\t",current_node->data);
        current_node= current_node->next;
  
    }
    printf("\n");

    
}