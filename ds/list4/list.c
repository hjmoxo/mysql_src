#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "list.h"

void initList(List *pList, int eleSize) {

    // dummy
    pList->ptr = malloc(sizeof(Node) /* + eleSize*/);
    assert(pList->ptr );
    pList->ptr->next = NULL;
    pList->eleSize = eleSize;

}

void cleanupList(List *pList) {

    Node *p = pList->ptr;
    while(p ) {
        Node *tmp = p;
        p = p->next;
        free(tmp);
    }

}

void insertFirstNode(List *pList, const void *pData) {

    Node *p = malloc(sizeof(Node) + pList->eleSize);
    assert(p );
    memcpy(p + 1, pData, pList->eleSize);
    p->next = pList->ptr->next;
    pList->ptr->next = p;

}

void insertNode(List *pList, const void *pPrevData, const void *pData) {

    Node *ptr = pList->ptr->next;
    while(ptr != NULL) {
        if( memcmp(ptr + 1, pPrevData, pList->eleSize) == 0 ) {
            break;
        }
        
        ptr = ptr->next;
    }

    if(ptr ) {  //found
        Node *p = malloc(sizeof(Node) + pList->eleSize);
        assert(p );
        memcpy(p + 1, pData, pList->eleSize);
        p->next = ptr->next;
        ptr->next = p;
    }

}

void deleteNode(List *pList, const void *pData) {

    Node *ptr1 = pList->ptr->next;
    Node *ptr2 = pList->ptr;

    while(ptr1 ) {
        if( memcmp(ptr1 + 1, pData, pList->eleSize) == 0) {
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

void pirntList(const List *pList, void (*print)(const void *)) {

    Node *p = pList->ptr->next;
    printf("[ ");
    while(p ){
        (*print)(p + 1);    //print(p + 1);
        printf( (p->next) ? ", " : "]\n" );
        p = p->next;
    }
    

}