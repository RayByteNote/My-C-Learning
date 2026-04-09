#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
typedef int SLDataType;
//#define N 7
//typedef struct SeqList
//{
//	SLDataType arr[N];
//	size_t size;//有效个数
//}SL;//静态数据表

typedef struct SeqList
{
	SLDataType* arr;
	size_t size;
	size_t capacity;
}SL;

void SLInit(SL* ps);

void SLDestroy(SL* ps);

void SLPrint(SL* ps);

void SLCheckCapacity(SL* ps);

void SLPushBack(SL* ps, SLDataType x);

void SLPopBack(SL* ps);

void SLPushFront(SL* ps, SLDataType x);

void SLPopFront(SL* ps);

void SLInsert(SL* ps, int pos, SLDataType x);

void SLErase(SL* ps, int pos);

int SLFind(SL* ps, SLDataType x);