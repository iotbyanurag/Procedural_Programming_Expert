#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Define the circular buffer structure

typedef struct{

        int *buffer; //allocate memory for this only dynamically
        int head;// keep single head and tail pointers
        int tail;
        int max_size;

}CircularBuffer_t;


void cb_init(CircularBuffer_t *cb, int size){

   
    cb->buffer= (int *) malloc(size * sizeof(int));
    for (int i = 0; i < size; ++i) {
    cb->buffer[i] = -1;  // Initialize to -1 or any other value you want.
    }
    
    cb->head= 0;
    cb->tail= 0;
    cb->max_size= size;
}

bool is_empty(CircularBuffer_t *cb){
    return cb->head== cb->tail;
}


bool is_full(CircularBuffer_t *cb){
    return (cb->head +1) % (cb->max_size)== cb->tail; // 
    
}

int dequeData(CircularBuffer_t *cb){
    if(is_empty(cb)){
        return -1;
    }
    int data= cb->buffer[cb->tail];
    cb->tail= (cb->tail +1) % cb->max_size;

}

int enqueData(CircularBuffer_t *cb, int data, int *count){

        if(is_full(cb)){
            printf("buf is full\n");
            (*count)++;
            return -1;
        }
        cb->buffer[cb->head]= data;

        cb->head = (cb->head+1) % cb->max_size;

    
    // if(is_full(cb)){
    //     printf("the buffer is full");
    //     cb->head= cb->tail;
    //     cb->buffer[cb->head]= data;
    //     cb->head= cb->head +1;
    // }
    

    return 0;
}
void print_CircBuff(CircularBuffer_t *cb){
    for (int i=0; i< cb->max_size; i++){
        printf("%d\t", cb->buffer[i]);
    }
}

int main(int argc, char *argv[]){
     int count= 0;
    CircularBuffer_t new_buffer;

    cb_init(&new_buffer, 10);
    enqueData(&new_buffer, 23, &count);
    // dequeData(&new_buffer);
    enqueData(&new_buffer, 46,&count);
    enqueData(&new_buffer, 123,&count);
    enqueData(&new_buffer, 1224,&count);
    enqueData(&new_buffer, 23,&count); 
    enqueData(&new_buffer, 46,&count);
    enqueData(&new_buffer, 23,&count);
    enqueData(&new_buffer, 46,&count);
    enqueData(&new_buffer, 23,&count);
    enqueData(&new_buffer, 46,&count);
    enqueData(&new_buffer, 543,&count);
    enqueData(&new_buffer, 678,&count);
    print_CircBuff(&new_buffer);

    printf("number of overflows %d\n\n",count);
}


