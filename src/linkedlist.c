#include "../include/linkedlist.h"

void InitTugas(Tugas **p){
    Tugas* node = (Tugas*)malloc(sizeof(Tugas));

    if (node != NULL)
    {
        node->next = NULL;

        if (p == NULL)
        {
            *p = node;
        }
        else{
            
        }
        
    }
    
}