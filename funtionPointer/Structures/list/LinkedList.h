//
// Created by last on 4/7/19.
//

#ifndef PLAYGROUND_LINKEDLIST_H
#define PLAYGROUND_LINKEDLIST_H

typedef struct List{
    int info;
    struct List *next;
    int (*comp) (struct List *this, struct List *other);
    int (*fun)(int, int);
}List;

int addInt(int n, int m);

List *newList();

int comp(struct List *this, struct List *other);

#endif //PLAYGROUND_LINKEDLIST_H
