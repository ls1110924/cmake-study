#include <stdio.h>
#include "math/add.h"

int main(void) {
    printf("Hello world\n");

    int res = add(1, 2);
    printf("1 + 2 = %d\n", res);

    return 0;
}