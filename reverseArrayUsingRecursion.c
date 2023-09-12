#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int arr[]= {1,2,3,4,5,6,7,8,9,10};
void reverseArrayUsingRecursion(int arr[], int start, int end);

int main(int argc, char *argv[]){

    int n= sizeof(arr)/sizeof(arr[0]);

    reverseArrayUsingRecursion(arr, 0, n-1);
    for(int i=0; i<n; i++){
            printf("%d\t",arr[i]);
        }



}

void reverseArrayUsingRecursion(int arr[], int start, int end){
     int temp=0;
    /*
        split it into two cases
        1. Base case - atomic work
        2. Recursive case - repetitive work
        
        start                       end
        1, 2, 3, 4, 5, 6, 7, 8, 9, 10

        10, 9, 8, 7, 6, 5, 4, 3, 2, 1
            |                    |
            start               end


    */

       if(start>=end){
            printf("start is > end\n");
            return;
       }

       temp= arr[start];
       arr[start]= arr[end];
       arr[end]= temp;
     reverseArrayUsingRecursion(arr, start+1, end-1);
          
}