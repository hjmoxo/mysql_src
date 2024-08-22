#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "list.h"

static Node *createNode(int data, Node *next) {

    Node *p = malloc(sizeof(Node));
    assert(p );
    p->data = data;
    p->next = next;

    return p;

}

void initList(List *pList) {

    // dummy
    pList->ptr = createNode(-1, NULL);

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

    pList->ptr->next = createNode(data, pList->ptr->next);

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
        ptr->next = createNode(data, ptr->next);
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
        printf("%d", p->data);
        // if (p->next ) {
        //     printf(", ");
        // } else {
        //     printf(" ]\n");
        // }
        printf(  (p->next) ? ", " : " ]\n");
        p = p->next;
    }

}