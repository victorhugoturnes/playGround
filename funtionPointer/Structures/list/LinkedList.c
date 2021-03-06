//
// Created by last on 4/7/19.
//

#include <stdlib.h>
#include "LinkedList.h"
#include "stdio.h"

int addInt(int n, int m) {
    return n + m;
}

List *newList() {
    List *list = malloc(sizeof(list));
    list->fun = &addInt;
    list->comp = &comp;
    list->next = 0;
    return list;
}

int comp(struct List *this, struct List *other) {
    if (this->info < other->info) return -1;
    return this->info > other->info;
}



void printList(List *pList) {
    while(pList){
        printf("%d\n", pList->info);
        pList= pList->next;
    }
}