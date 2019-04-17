/*
1. Write a program which displays all elements which are perfect from singly
linear linked list.
Function Prototype :int DisplayPerfect( PNODE Head);
Input linked list : |11|->|28|->|17|->|41|->|6|->|89|
Output : 6 28
*/

#include"header.h"

void DisplayPerfect(PNODE Head)
{
	int i = 0,sum=0;
	while (Head != NULL)
	{
		for (i = 1; i <= (Head->Data / 2); i++)
		{
			if ((Head->Data) % i == 0)
			{
				sum += i;
			}
		}
		if (sum == Head->Data)
		{
			printf("%d\t", Head->Data);
		}
		Head = Head->Next;
		i = sum = 0;
	}
	printf("\n");
}

