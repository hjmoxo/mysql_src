#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "queue.h"

void initQueue(Queue *pq, int size, int eleSize)
{
	pq ->pArr = malloc(eleSize * size);
	
	assert(pq->pArr);
	pq->eleSize = eleSize;
	pq->size = size;
	pq->front = 0;
	pq->rear = 0;
}

void cleanupQueue(Queue *pq) {
	free(pq->pArr);
}

void push(Queue *pq, const void *pData)
{
	assert(pq->rear != pq->size);

	memcpy( (unsigned char *)pq->pArr + pq->eleSize * pq->rear, pData, pq->eleSize);
	++pq->rear;
}

void pop(Queue *pq, void *pResult)
{
	assert(pq->front != pq->rear);
	
	memcpy(pResult, (unsigned char *)pq->pArr + pq->eleSize * pq->front, pq->eleSize);
	++pq->front;
}


