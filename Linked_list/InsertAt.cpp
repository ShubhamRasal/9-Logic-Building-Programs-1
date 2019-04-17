/*
2.Write a program which accept source and destination linked list from user
and we have to insert source linked list in destination linked list at given
position.
Function Prototype : int InsertAt(PPNODE Src, PPNODE dest, int pos);
Input src linked list : |10|->|20|->|30|->|40|
Input dest linked list: |50|->|60|->|70|->|80|
Input position : 3
Output dest linked list: |50|->|60|->|10|->|20|->|30|->|40|->|70|->|80|
*/

#include"header.h"

void InsertAt(PPNODE Src, PPNODE dest, int pos)
{
	PNODE start = NULL, end = NULL;
	PNODE src1 = *Src, des1 = *dest;
	int i = 1;

	while (i < pos)
	{
		src1 = src1->Next;
		i++;
	}
	start = src1->Next;
	src1->Next = des1;
	while (des1->Next != NULL)
	{
		des1 = des1->Next;
	}
	des1->Next = start;

}

//InsertAt(&First, &second, 2);