#include <stdio.h>
#include <stdlib.h>

#define WIDTH 128
#define HEIGHT 64

unsigned char framebuffer[HEIGHT][WIDTH] = {
    {255, 0, 255, /*...*/ },  // First row of pixels
    {128, 128, 128, /*...*/ },  // Second row of pixels
    //...
};


void save_framebuffer_to_ppm(const char *filename, unsigned char framebuffer[HEIGHT][WIDTH]) {
    FILE *file = fopen(filename, "wb");
    if (!file) {
        perror("Failed to open file for writing");
        exit(EXIT_FAILURE);
    }

    // Write the PPM header
    fprintf(file, "P5\n%d %d\n255\n", WIDTH, HEIGHT);

    // Write the framebuffer data
    for (int y = 0; y < HEIGHT; y++) {
        fwrite(framebuffer[y], sizeof(unsigned char), WIDTH, file);
    }

    fclose(file);
}

int main() {
    save_framebuffer_to_ppm("framebuffer.ppm", framebuffer);
    printf("Framebuffer saved to framebuffer.ppm\n");
    return 0;
}
