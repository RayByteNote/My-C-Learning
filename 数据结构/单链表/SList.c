
#include"SList.h"

//打印单链表
void SLTPrint(SLTnode* phead)
{
	SLTnode* pcur = phead;
	while (pcur)
	{
		printf("%d->", pcur->data);
		pcur = pcur->next;
	}
	printf("->NULL");
	printf("\n");
}


//创建节点
struct SLTnode* SLTbuynode(SLTDatatype x)
{
	SLTnode* newnode = (SLTnode*)malloc(sizeof(SLTnode));
	if (newnode == NULL)
	{
		perror("malloc");
		exit(1);
	}
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}

//头插
void SLTpushFront(SLTnode** phead, SLTDatatype x)
{
	struct SLTnode* newnode = SLTbuynode(x);
	newnode->next = *phead;
	*phead = newnode;
}

//头删
void SLTpopFront(SLTnode** phead)
{
	assert(phead&&*phead);
	SLTnode* pcur = (*phead)->next;
	free(*phead);
	*phead = pcur;
}

//尾插
void  SLTpushback(SLTnode** phead, SLTDatatype x)
{
	assert(phead);
	SLTnode* newnode = SLTbuynode(x);
	if (*phead == NULL)
	{
		*phead = newnode;
	}
	else {
		SLTnode* pcur = *phead;
		while (pcur->next != NULL)
		{
			pcur = pcur->next;
		}
		pcur->next = newnode;
	}
}

//尾删
void SLTpopback(SLTnode** phead)
{
	assert(phead&&*phead);
	if ((*phead)->next == NULL)
	{
		free(*phead);
		*phead = NULL;
	}
	else {
		SLTnode* pcur = *phead;
		while (pcur->next->next != NULL)
		{
			pcur = pcur->next;
		}
		free(pcur->next);
		pcur->next = NULL;
	}
}

//查找
SLTnode* SLTFind(SLTnode* phead, SLTDatatype x)
{
	SLTnode* pcur = phead;
	while (pcur!=NULL)
	{
		if (pcur->data == x)
		{
			return pcur;
		}
		pcur = pcur->next;
	}
	return NULL;
}

//在指定位置之前插⼊数据
void SLTInsert(SLTnode** pphead, SLTnode* pos, SLTDatatype x)
{
	assert(pphead!=NULL);
	assert(pos != NULL);
	struct SLTnode*newnode=SLTbuynode(x);
	if (*pphead == pos)
	{
		newnode->next = *pphead;
		*pphead = newnode;
		return;
	}
	SLTnode* pcur = *pphead;
	while (pcur->next != pos)
	{
		pcur = pcur->next;
		if (pcur == NULL)
		{
			perror("pcur==NULL");
			exit(2);
		}
	}
	pcur->next = newnode;
	newnode->next = pos;
}

//删除pos结点
void SLTErase(SLTnode** pphead, SLTnode* pos)
{
	assert(pphead);
	assert(pos);
	if (pos == *pphead)
	{
		*pphead = pos->next;
		free(pos);
		pos = NULL;
		return;
	}
	SLTnode* pcur = *pphead;
	while (pcur->next!=pos)
	{
		pcur = pcur->next;
		if (pcur==NULL)
		{
			perror("pcur==NULL");
			exit(3);
		}
	}
	pcur->next = pos->next;
	free(pos);
	pos = NULL;
}

//在指定位置之后插⼊数据
void SLTInsertAfter(SLTnode* pos, SLTDatatype x)
{
	assert(pos);
	struct SLTnode* newnode = SLTbuynode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}

//删除pos之后的结点
void SLTEraseAfter(SLTnode* pos)
{
	assert(pos);
	if (pos->next == NULL)
		return;
	SLTnode* pcur = pos->next;
	pos->next = pcur->next;
	free(pcur);
	pcur = NULL;
}

//销毁链表
void SListDestroy(SLTnode** pphead)
{
	assert(pphead);
	SLTnode* pcur = *pphead;
	while (pcur)
	{
		SLTnode* next = pcur->next;
		free(pcur);
		pcur = next;
	}
	*pphead = NULL;
}