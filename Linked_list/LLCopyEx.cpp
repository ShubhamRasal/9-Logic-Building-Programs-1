/*
1.Write a program which copies contents of source singly linear linked list
whose addition of digits is even number to destination singly linear linked
list.
Function Prototype : void LLCopyEx(PPNODE Src, PPNODE Dest);
Input source linked list : |30|->|33|->|73|->|80|->|90|->|100|->|110|
Input destination linked list : Empty (NULL)
Output destination linked list : |33|->|73|->|80|->|110|
*/
#include"Header.h"

void LLCopyEx(PPNODE Src, PPNODE Dest)
{
	if (Src == NULL)
	{
		return;
	}
	PNODE head = NULL, temp = *Src, temp2 = NULL, temp3 = NULL;
	
	while (temp != NULL)
	{
		if (sumEven(temp->Data) == 0)
		{
			head = (PNODE)malloc(sizeof(NODE));
			head->Data = temp->Data;
			head->Next = NULL;
			temp = temp->Next;
			break;
		}
		temp = temp->Next;
	}

	while (temp != NULL)
	{
		if (sumEven(temp->Data) == 0)
		{
			temp2 = (PNODE)malloc(sizeof(NODE));
			temp2->Data = temp->Data;
			temp2->Next = NULL;
			if (head->Next == NULL)
			{
				temp3 = head->Next = temp2;
			}
			temp3 = temp3->Next = temp2;
		}
		temp = temp->Next;
	}

	*Dest = head;
}