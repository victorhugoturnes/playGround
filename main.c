#include <stdio.h>
#include "funtionPointer/Structures/list/LinkedList.h"
#include "Sorter/mergeSort.h"

#include <time.h>
#include <stdlib.h>


//void printList(List *pList);

int main() {
    printf("Hello, World!\n");
    List *list = newList();
    printf("%d\n", list->fun(40, 2));

    srand(time(NULL));   // Initialization, should only be called once.


    List *bigList=list;
    for (int i = 0; i < 10; ++i) {
        bigList->next = newList();
        bigList= bigList->next;
        bigList->info = srand()%300;
        printf("generating list %d\n", bigList->info);
    }

//    for (int j = 1; j < 9; ++j) {
//        printf("comparing lists %d and %d: %d\n", bigList[j-1]->info, bigList[j]->info, bigList[j]->comp(bigList[j - 1], bigList[j]));
//        printf("comparing lists %d and %d: %d\n", j, j - 1, bigList[j]->comp(bigList[j], bigList[j - 1]));
//        printf("comparing lists %d and %d: %d\n", j, j, bigList[j]->comp(bigList[j], bigList[j]));
//    }
    printList(list);
    for (int j = 0; j < 10; ++j) {
        list = merge_sort(list, list->comp);

    }
    printf("----------------------\n");

    printList(list);
    return 0;
}
