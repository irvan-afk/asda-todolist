#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef char* infotype;
typedef struct Tugas {
    infotype data;
    struct Tugas* next;
} Tugas;

#endif