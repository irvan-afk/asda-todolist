#ifndef TREE_H
#define TREE_H

#include "linkedlist.h"

typedef Directory* address;

typedef struct DirData {
    infotype dirName;
    Tugas* head;
} DirData;

typedef struct Directory {
    DirData data;
    address firstSon;
    address nextBrother;
} Directory;

#endif