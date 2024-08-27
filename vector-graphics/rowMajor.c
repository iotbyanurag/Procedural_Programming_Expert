#include <stdio.h>
#include <stdint-gcc.h>

int arr[3][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
};

void convertToRowMajorOrder(int ptr[][4], int rows, int cols) {

    uint8_t elementCount =  rows * cols;
    printf("number of elements in the arr is %d \n", elementCount);

    for(int i=0; i< rows; i++){
        for(int j= 0; j< cols; j++){
            printf("%u",arr[i][j]);
        }
    }
}

int main(int argc, char *argv[])
{
    convertToRowMajorOrder(arr,3,4);
    return 0;
    
}