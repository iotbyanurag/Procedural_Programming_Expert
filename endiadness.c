#include <stdio.h>
#include <stddef.h>
#include <stdint.h>

void convertIntToBigEndian(void* num, int size);
void extrctEachByteFromInteger(int num);
int main() {
    int i ;
    int n = 7459; // Using 'int' as an example. 
    printf("sizof n is %ld\n", sizeof(n));
    // convertIntToBigEndian(&n, sizeof(n));
    
    // // For demonstration purposes, printing bytes of n after conversion
    // unsigned char* bytes = (unsigned char*)&n;
    // for(i = 0; i < sizeof(n); i++) {
    //     printf("%02x ", bytes[i]);
    // }
    extrctEachByteFromInteger(n);
    
    return 0;
}

void convertIntToBigEndian(void* num, int size) {
    unsigned char* bytes = (unsigned char*)num;
    int i ;
    // A simple check to determine system's endianness
    unsigned int check = 0x01;
    if (*(unsigned char*)&check != 0x01) {
        printf("THE SYSTEM IS BIG ENDIAN");
        // The system is already big-endian, no need to swap bytes
        return;
    }
    // 
    // If we're here, the system is little-endian and bytes need to be swapped
    for(i = 0; i < size / 2; i++) {
        unsigned char temp = bytes[i];
        bytes[i] = bytes[size - i - 1];
        bytes[size - i - 1] = temp;
    }
}

void convertToBigEndianUsingBitManipulation(int num){

    // assume int 4 bytes
    int byte0 = (num & 0x000000FF) >> 0;

}

void extrctEachByteFromInteger(int num){
   
    int i;
    for (i = 0; i < sizeof(int32_t); i++) {
        unsigned char byte = (num >> (i * 8)) & 0xFF;
        printf("Byte %d: %02x\n", i, byte);
    }


   
}
