#ifndef LIST_H
#define LIST_H
#include <stdio.h>

 typedef struct node {
    //void *pData;
    struct node *next;
} Node;

typedef struct {
    Node *ptr;
    int eleSize;
} List;

void initList(List *pList, int eleSize);
void cleanupList(List *pList);

void insertFirstNode(List *pList, const void *pData);
void insertNode(List *pList, const void *pPrevData, const void *pData);
void deleteNode(List *pList, const void *pData);

void pirntList(const List *pList, void (*print)(const void *));

#endif
