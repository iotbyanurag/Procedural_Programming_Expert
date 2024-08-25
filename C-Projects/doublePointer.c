#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int createDynamic2D_array();
int main(int argc, char *argv[]){

    int x=600;

    int *ptr1 = &x;
    int **ptr2 = &ptr1;

    printf("value at pointed location by ptr1 %d\n", *ptr1);
    **ptr2= 700;
  

    
    printf("value at pointed location by ptr2 %d\n", **ptr2);

    createDynamic2D_array();

    return 0;

}

int createDynamic2D_array(){
    int rows=2, cols=4;
    /* rows=2 cols=4
         arr[2][4] 

         - - - -
         - - - -

    */
//    char *new_ptr[]= {"hello", "world", "!"};

//    char *ptr= "my hello world";
//     printf("deref the ptr pointing to the string %s\n", *ptr);

//     while(*ptr != '\0'){
//         printf("%c",*ptr++);
//     }
//     printf("\n");


//     new_ptr[0]= "new";
//     new_ptr[100]= "colony";
//      printf("%s\n",new_ptr[0]);
//     printf("%s\n",new_ptr[1]);
//     printf("%s\n",new_ptr[2]);
//     printf("%s\n",new_ptr[102]);
    
    /*
    allocate array of int pointers to hold 1D array of their own
    |* |--------->
    |* |--------->
    |* |
    |* |
    */
   printf("when num of rows %d cols %d\n", rows,cols);

   int **arr= (int **)malloc(rows* sizeof(int*));

   for(int i=0; i<rows; i++){
    arr[i]= (int*)malloc(cols * sizeof(int));
   }
   for(int i=0;i<rows;i++){
    for(int j=0; j<cols; j++){
        printf("*");
    }
    printf("\n");
   }

rows=8;

printf("when num of rows %d cols %d\n", rows,cols);
    arr= (int **)realloc(arr, sizeof(int *)* rows);

    for(int i=0; i<rows; i++){
    arr[i]= (int*)malloc(cols * sizeof(int));
   }
   for(int i=0;i<rows;i++){
    for(int j=0; j<cols; j++){
        printf("*");
    }
    printf("\n");
   }
    
    free(arr);
    for(int i=0; i<rows; i++){
        free(arr[i]);
    }

}