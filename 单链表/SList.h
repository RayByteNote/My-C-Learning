#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int SLTDatatype;
typedef struct SLTnode
{
	SLTDatatype data;
	struct SLTnode* next;
}SLTnode;

//¥Ú”°µ•¡¥±Ì
void SLTPrint(SLTnode* phead);

struct SLTnode* SLTbuynode(SLTDatatype x);

void SLTpushFront(SLTnode** phead, SLTDatatype x);

void SLTpopFront(SLTnode** phead);

void SLTpushtail(SLTnode** phead, SLTDatatype x);

void SLTpoptail(SLTnode** phead);

SLTnode* SLTFind(SLTnode* phead, SLTDatatype x);

void SLTInsert(SLTnode** pphead, SLTnode* pos, SLTDatatype x);

void SLTErase(SLTnode** pphead, SLTnode* pos);

void SLTInsertAfter(SLTnode* pos, SLTDatatype x);

void SLTEraseAfter(SLTnode* pos);

void SListDestroy(SLTnode** pphead);