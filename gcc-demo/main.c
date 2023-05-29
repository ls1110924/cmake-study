#include <stdio.h>

// comment 1

int math(int x, int y, int z) {
    return x * y + z;
}

// comment 2

int main(int argv, char** args) {
    printf("Hello world\n");
    int x = 2;
    int y = 3;
    int z = 4;
    int result = math(x, y, z);
    printf("%d * %d + %d = %d", x, y, z, result);
    return 0;
}