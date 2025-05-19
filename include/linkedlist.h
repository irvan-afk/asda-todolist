/* linked_list.h */
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* infotype;

typedef struct Node {
    infotype data;
    struct Node* next;
} Node;

typedef struct {
    Node* head;
    int size;
} LinkedList;

// Fungsi inisialisasi linked list
void initList(LinkedList* list);

void insertFront(LinkedList* list, infotype data);

void insertBack(LinkedList* list, infotype data);

void insertAt(LinkedList* list, infotype data, int position);

infotype deleteFront(LinkedList* list);

infotype deleteBack(LinkedList* list);

int deleteAt(LinkedList* list, int position);

int search(LinkedList* list, infotype data);

void printList(LinkedList* list);

void clearList(LinkedList* list);

#endif