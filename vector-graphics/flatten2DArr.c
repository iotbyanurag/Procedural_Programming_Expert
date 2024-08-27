#include <stdio.h>
#include <stdint.h>

#define ROWS 3
#define COLS 4

typedef enum {
    FLATTENED = 0,
    NONFLATTENED
}outputType_t;


static int tempArr[12]={0};

void print2DArray(int arr[ROWS][COLS], outputType_t outputFormat){

    switch(outputFormat){
        case FLATTENED:
            printf("requested format is flattened: \n");
            for(int i=0; i< ROWS; i++){
                for(int j=0; j < COLS; j++){
                    printf("%u \t", arr[i][j]);
                }
                printf("\n");
            }
            break;

        case NONFLATTENED:
            printf("requested format is non-flattened: \n");
                break;

    }
}


void flatten2Darr(int inputArr[ROWS][COLS], int outputArr[ROWS][COLS])
{
    static int k=0;

    for(int i=0; i< ROWS; i++){
        for(int j=0; j< COLS; j++){                 
           tempArr[k++] = inputArr[i][j];
           printf("iteration %u \t", i+j);
          
        }
        
       printf("\n");
    }
}

int main(int argc , char *argv[]){

int arr[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 14}
    };

int outputArr[ROWS][COLS]={0};

    print2DArray(arr, FLATTENED);

    flatten2Darr(arr,outputArr);

    for (int i=0; i< ROWS*COLS ; i++){
        printf("%u \t", tempArr[i]);
    }

    // print2DArray(tempArr, NONFLATTENED);

}