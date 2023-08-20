#include <stdio.h>
#include <stdlib.h>

/*
problem statement: create a dynamic memory allocation based - resizebale array
Input: size of data
Output: pointer to the starting address of allocated memory section

To build the program with debugging symbols use:
gcc -g dynamicArray.c -o dynamicArray
*/

typedef struct {
    int *data;
    size_t size;
}IntArray;

IntArray* CreateVectorLikeDynamicArray(int required_size){

    printf("the provided array size is %d\n",required_size);

    IntArray *arr= malloc(sizeof(IntArray));

    if(arr){
            // here instead of returing the pointer to the starting point of allocated buf directly, we hold it in data- which is a int pointer 
            // itself
           //arr->data = malloc(required_size * sizeof(char));
             arr->data = malloc(required_size);
            
            if(!arr->data){
                free(arr);
                return NULL;
            }
            arr->size = required_size; 
          
    }
      return arr;
}

/*
    argc = number of arguments passe to the program
    argv[0]= name of the program itself
    argv[1].. argv[n] = actual arguments i.e. 1st to nth
*/ 
int main(int argc, char* argv[]){

    printf("name of program is: %s \n", argv[0]);
    printf("first argument provided to program is: %s\n", argv[1]);
    // argv[] is a pointer to list of strings
    int array_size= atoi(argv[1]);
   
    IntArray* arr= CreateVectorLikeDynamicArray(array_size);

    // this will not print the allocated memory size, but instead the sizeof pointer to allocated memory
    //printf("allocated data size is %d\n",sizeof(arr));
    // to keep track of the number of allocated bytes, we take another member variable size 
    printf("Number of allocated bytes for data: %zu\n", arr->size /sizeof(char));


}
