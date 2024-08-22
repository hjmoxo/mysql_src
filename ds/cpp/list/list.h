#ifndef LIST_H
#define LIST_H
#include <stdio.h>

typedef struct node {
    int data;
    struct node *next;
} Node;

typedef struct {
    Node *ptr;      //delete를 위해 포인트 노드 2개~ 
} List;

void initList(List *pList);
void cleanupList(List *pList);

void insertFirstNode(List *pList, int data);
void insertNode(List *pList, int prevData, int data);
void deleteNode(List *pList, int data);

void pirntList(const List *pList);

#endif
