#include <stdio.h>
#include "math/add/add.h"
#include "math/minus/minus.h"

int main(void) {
    printf("Hello world\n");

    int res = add(1, 2);
    printf("1 + 2 = %d\n", res);

    res = minus(6, 4);
    printf("6 - 4 = %d\n", res);

    return 0;
}