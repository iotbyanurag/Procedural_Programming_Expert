
#include <stdio.h>
#include <stdlib.h>

typedef struct Stack {
    int data;
    struct Stack* next;
}stack_t;

/*
    enqeueElement
    dequeElement
    printQueueElements

    2,3,4,5,6   -- LIFO

    |------|<-------- top pointer for stackss
    |__6___|
    |__5___|
    |__4___|
    |__3___|<--------top
    |__2___|
*/

stack_t* pop(stack_t* top, int* poppedData){

    *poppedData= top->data;
    stack_t* new_top= top->next;
    free(top);

    return new_top;
}

stack_t* push(stack_t* top,int data){

    stack_t* newNode= (stack_t*) malloc(sizeof(stack_t));
    if(newNode == NULL){
        return NULL;
    }
    newNode->data= data;
    newNode->next= top;

    return newNode;
}

void printStack(stack_t * top){

    while(top!=NULL){
        printf("%d\n", top->data);
        top= top->next;
    }
    printf("\n");
}


int main(int argc, char*argv[]){
    int poppedData;


    stack_t* top= NULL;
    top= push(top,1);
    top= push(top,2);
    top= push(top,3);
    top= push(top,4);
    top= push(top,5);
    top= push(top,6);



    printStack(top);
    top = pop(top, &poppedData);
     printf("Popped: %d\n", poppedData);
    printStack(top);

    return 0;
}