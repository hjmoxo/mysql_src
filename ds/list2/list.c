#include <stdlib.h>
#include <stdio.h>
#include "list.h"

void initList(List *pList) {

    pList->ptr = malloc(sizeof(Node));  // dummy
    //pList->ptr->data = 0;
    pList->ptr->next = NULL;

}

void cleanupList(List *pList) {

    Node *p = pList->ptr;
    while(p ) {
        Node *tmp = p;
        p = p->next;
        free(tmp);
    }

}

void insertFirstNode(List *pList, int data) {

    Node *p = malloc(sizeof(Node));
    p->data = data;
    p->next = pList->ptr->next;
    pList->ptr->next = p;

}

void insertNode(List *pList, int prevData, int data) {

    Node *ptr = pList->ptr->next;
    while(ptr != NULL) {
        if(ptr->data == prevData) {
            break;
        }
        
        ptr = ptr->next;
    }

    if(ptr ) {  //found
        Node *p = malloc(sizeof(Node));
        p->data = data;
        p->next = ptr->next;
        ptr->next = p;
    }

}

void deleteNode(List *pList, int data) {

    Node *ptr1 = pList->ptr->next;
    Node *ptr2 = pList->ptr;

    while(ptr1 ) {
        if(ptr1->data == data) {
            break;
        }

        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    if(ptr1 ) {
        ptr2->next = ptr1->next;
        free(ptr1);
    }

}

void pirntList(const List *pList) {

    Node *p = pList->ptr->next;
    printf("[ ");
    while(p ){
        printf("%d ", p->data);
        p = p->next;
    }
    printf("]\n");

}