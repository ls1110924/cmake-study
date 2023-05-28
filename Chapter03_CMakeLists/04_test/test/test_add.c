#include <stdio.h>
#include <stdlib.h>
#include "../src/math/add.h"

int main(int argc, char* argv[]) {
    if (argc != 4) {
        printf("Usage: test_add v1 v2 expected");
        return 1;
    }
    int x = atoi(argv[1]);
    int y = atoi(argv[2]);
    int expected = atoi(argv[3]);
    int res = add(x, y);
    if (expected != res) {
        return 1;
    } else {
        return 0;
    }
}