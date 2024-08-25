#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stddef.h> 

#define mysizeof(x)  (char*)(&x+1) - (char*)(&x)

#define myTypeofSizeof(var)    ((size_t)(&((typeof(var)*)0)[1]) -  (size_t)(&((typeof(var)*)0)[0]))

#define SIZEOF_INT() ((size_t)((int*)1) - (size_t)((int*)0))

void swapIntegers(int *num1, int *num2);
void bubbleSortOnArray(int arr[], int n);

int arr[]= {14,254,52,10,31};

int main (int argc, char *argv[]){

    int size= sizeof(arr)/sizeof(&arr[0]);
    printf("number of elements in array is %d", size);

    bubbleSortOnArray(&arr[0],5);

    for(int i=0;i<5;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    int x=4;
    printf("mysizeof int %d\n",mysizeof(x));
    printf("my new sizeof %d\n", myTypeofSizeof(x));

    printf("sizeof int is %d",SIZEOF_INT());
}

void swapIntegers(int *num1, int *num2){

    printf("num1 and num2 before swap are %d %d", *num1, *num2);
    int temp;
    temp= *num1;
    *num1= *num2;
    *num2= temp;
    printf("\n");
    printf("num1 and num2 after swap are %d %d", *num1, *num2);
    printf("\n");
}
/*
    received array is : 14,254,52,10,31
*/

void bubbleSortOnArray(int arr[], int n){
    for(int i=0; i<n-1; i++){
        // printf("%d\t", arr[i]);

        /*
            {14,254,52,10,31};
            1st pass = 14,254 
            2nd pass= 14,52
        */
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                printf("swapping integers %d %d",arr[i],arr[j]);
                printf("\n");
                swapIntegers(&arr[j],&arr[j+1]);
            }
        }
    }
    printf("\n");
}