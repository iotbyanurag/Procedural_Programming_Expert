#include <stdio.h>

int main() {
    FILE* file_handle;

    file_handle= fopen("example.txt", "w");

    if(file_handle == NULL){
        printf("error opening file");
    }

    fprintf(file_handle, "file opened");
    fprintf(file_handle, "file closed");

    return 0;
}
