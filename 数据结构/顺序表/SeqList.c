
#include"SeqList.h"

//初始化
void SLInit(SL* ps)
{
	if (ps == NULL)
		return;
	ps->arr = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

//销毁
void SLDestroy(SL* ps)
{
	if (ps == NULL)
	{
		return;
	}
	free(ps->arr);
	ps->arr = NULL;
	ps->capacity = 0;
	ps->size = 0;
}

//打印
void SLPrint(SL* ps)
{
	if (ps == NULL)
	{
		return;
	}
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", (ps->arr)[i]);
	}
	printf("\n");
}

//扩容
void SLCheckCapacity(SL* ps)
{
	if (ps == NULL)
	{
		return;
	}
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : (ps->capacity) * 2;
		SLDataType* tmp = (SLDataType*)realloc(ps->arr, newcapacity*sizeof(SLDataType));
		if (tmp == NULL)
		{
			perror("realloc");
			exit(1);
		}
		ps->arr = tmp;
		ps->capacity = newcapacity;
	}
}

//尾插
void SLPushBack(SL* ps, SLDataType x)
{
	if (ps == NULL)
		return;
	SLCheckCapacity(ps);
	ps->arr[ps->size] = x;
	ps->size++;
}

//尾删
void SLPopBack(SL* ps)
{
	if (ps == NULL)
		return;
	if (ps->size == 0)
		return;
	ps->size--;
}

//头插
void SLPushFront(SL* ps, SLDataType x)
{
	if (ps == NULL)
		return;
	SLCheckCapacity(ps);
	for (int i = ps->size; i > 0; i--)
	{
		ps->arr[i] = ps->arr[i - 1];
	}
	ps->arr[0] = x;
	ps->size++;
}

//头删
void SLPopFront(SL* ps)
{
	if (ps == NULL)
		return;
	if (ps->size == 0)
		return;
	for (int i = 0; i < ps->size-1; i++)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;
}

//指定位置前插入数据
void SLInsert(SL* ps, int pos, SLDataType x)
{
	if (ps == NULL)
		return;
	if (pos < 0 || pos > ps->size)
		return;
	SLCheckCapacity(ps);
	for (int i = ps->size; i > pos; i--)
	{
		ps->arr[i] = ps->arr[i - 1];
	}
	ps->arr[pos] = x;
	ps->size++;
}

//指定位置前删除数据
void SLErase(SL* ps, int pos)
{
	if (ps == NULL)
		return;
	if (pos < 0|| pos >= ps->size)
		return;
	for (int i = pos; i < ps->size-1; i++)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;
}

//查找
int SLFind(SL* ps, SLDataType x)
{
	if (ps == NULL)
		return -1;
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->arr[i] == x)
			return i;
	}
	return -1;
}