#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint32_t numberX= 0x12345678; // 0xDE 0xAD 0xDE 0xAF --> 0xAF 0xDE 0xAD 0xDE

int main(int argc, char *argv[]){   

    uint32_t newNumber= 0;

    newNumber |= ((numberX & 0xFF)<<24) | ((numberX & 0xFF00)<<8) | ((numberX & 0xFF0000)>>8) | ((numberX & 0xFF000000)>>24);

    printf("%X", newNumber);
    return 0;
}