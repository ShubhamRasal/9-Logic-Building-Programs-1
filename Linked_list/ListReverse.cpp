/*
4. Write a program which accept source singly linear linked list from user
and reverse that linear linked.
Function Prototype : int ListReverse(PPNODE Src);
Input source linked list : |110|->|73|->|10|->|80|->|70|->|12|
Output source linked list: |12|->|70|->|80|->|10|->|73|->|110|
*/

#include"Header.h"

void ListReverse(PPNODE Src)
{
	PNODE current =*Src, prev = NULL, next = NULL;

	while (current != NULL)
	{
		next = current->Next;
		current->Next=prev;
		prev = current;
		current = next;
	}
	*Src = prev;

}