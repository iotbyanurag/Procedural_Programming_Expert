#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef enum pos{
    FRONT= 0,
    MIDDLE,
    END
}pos_t;

typedef struct node{
    int data ;
    struct node *next;
}node_t;
node_t *head_node= NULL, *fast_pointer = NULL, *slow_pointer= NULL, *current_node= NULL, *end_node= NULL;


int addNodesToLinkedList(int val, pos_t pos);
void printElementsOfLL();
node_t *returnTheEndNodeLL();
node_t *returnMiddleNodeOfLL();
void sortLinkedListBubbleSort();

int main(int argc, char *argv[]){
    addNodesToLinkedList(14, FRONT);
    addNodesToLinkedList(23,FRONT);
    addNodesToLinkedList(96,FRONT);
    addNodesToLinkedList(149,FRONT);
    addNodesToLinkedList(150,FRONT);
    addNodesToLinkedList(151,FRONT);
    

    printf("before adding middle node \n");
    

    printElementsOfLL();
    addNodesToLinkedList(100,MIDDLE);
    printf("after adding middle node \n");

    printElementsOfLL();

    addNodesToLinkedList(600,END);
    printf("before sorting the nodes \n");
    printElementsOfLL();

    
    sortLinkedListBubbleSort();
    printf("after sorting the nodes \n");
    printElementsOfLL();
}

int addNodesToLinkedList(int val, pos_t pos){
     node_t *new_node= malloc(sizeof(node_t));

    switch(pos){
        case FRONT: 
                new_node->data = val;
                new_node->next= head_node;
                head_node= new_node;
                break;

        case MIDDLE:
                node_t *middle_node= returnMiddleNodeOfLL();
                printf("data of middle node is %d\n", middle_node->data);

                /* now we need to adjust the links - to accomodate for the new icoming node 
                    Head
                    |                                 100
                                                    /    \
                    151 ---> 150 ----> 149 ----> 96 -----> 23 ----> 14 ----> NULL
                                              Middle -next-->
                                               node
                
                */
                new_node->data= val;
                new_node->next= middle_node->next;
                middle_node->next = new_node;


                break;

            case END:

                /*
                    HEAD
                     |                                                new_node
                                                                     / \  
                    151 ---> 150 ---> 149 ----> 96 ----> 23 -----> 14 ---> NULL

                                                                    end_node

                    find the end node 
                    -> relink the end node and new_node
                */  
               end_node= returnTheEndNodeLL();
               new_node->data= val;
               end_node->next= new_node;
               new_node->next= NULL;
               printf("the end node is %d\n",end_node->data );
               break;

        default:
                printf("input doesn't match any positions");
    }

}
/*
    LL will look like this when arranged -
    Head_Node
       |
       13 ----> 14 ----> 15 -------> 16 ------> 17 ------> 123 -----> NULL

       the last marker is NULL, to indicate that the list has ended 
       so, while  traversing, when trying to print all the nodes, we have to
       stop when NULL is found.

       slow_pointer= 13, fast_pointer= 13
       14                  15
*/

node_t *returnMiddleNodeOfLL(){
   
    slow_pointer= head_node;
    fast_pointer= head_node;

    while (fast_pointer !=NULL && fast_pointer-> next !=NULL){ 
            fast_pointer= fast_pointer->next->next;
            slow_pointer= slow_pointer->next;
        
    }
   
    if(slow_pointer == NULL){
        printf("couldn't find middle node");
        return NULL;
    }
    return slow_pointer;
}

node_t *returnTheEndNodeLL(){

    node_t *end_node= NULL;
    current_node= head_node;
    while (current_node->next != NULL ){
        current_node= current_node->next;
    }
   

    return current_node;
}


void printElementsOfLL(){

    node_t *current_node= malloc(sizeof(node_t));

    current_node= head_node;
    while(current_node != NULL){
        printf("%d\t",current_node->data);
        current_node= current_node->next;
    }
    printf("\n");
}
void swapNodes(node_t *node1, node_t *node2){
    int temp=0;

    temp = node1->data;
    node1->data= node2->data;
    node2->data= temp;

}

void sortLinkedListBubbleSort(){
 
  node_t *ptr1= NULL;
  node_t *lptr = NULL;

 if (head_node == NULL) {
        return;
    }
// 151     150     149     100     96      23      600     14
  do{
        ptr1= head_node;
        while(ptr1->next != lptr){
                if(ptr1->data > ptr1->next->data){
                    swapNodes(ptr1, ptr1->next);
                    
                }
                ptr1= ptr1->next; // increment the pointer 
        }
        lptr = ptr1;

  }while (lptr != head_node);
}