#include <stdio.h>

void convertIntToBinary(int num);

int n = 123;

int main() {
    printf("Hello world\n");
    printf("%x\n", n);
    convertIntToBinary(n);
    return 0;
}

void convertIntToBinary(int num) {
    int i;
    int bitSize = sizeof(num) * 8;  // Generalizing for int of any size
    printf("Received number is %d\n", num);
    
    // Iterate from the most significant bit to least significant bit
    for (i = bitSize - 1; i >= 0; i--) {
        if (num & (0x01 << i)) {
            printf("1");
        } else {
            printf("0");
        }
    }
    printf("\n");  // Move to the next line after printing the binary representation
}
