#include <stdio.h>
#include "funtionPointer/Structures/list/LinkedList.h"

int main() {
    printf("Hello, World!\n");
    List *list = newList();
    printf("%d", list->fun(40, 2));

    List *bigList[10];
    for (int i = 0; i < 10; ++i) {
        printf("generating list %d\n", i);
        bigList[i] = newList();
        bigList[i]->info = i;
    }

    for (int j = 1; j < 9; ++j) {
        printf("comparing lists %d and %d: %d\n", j-1, j, bigList[j]->comp(bigList[j-1], bigList[j]));
        printf("comparing lists %d and %d: %d\n", j, j-1, bigList[j]->comp(bigList[j], bigList[j-1]));
        printf("comparing lists %d and %d: %d\n", j, j, bigList[j]->comp(bigList[j], bigList[j]));
    }

    return 0;
}