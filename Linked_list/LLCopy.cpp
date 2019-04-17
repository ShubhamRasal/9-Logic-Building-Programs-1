/*
4.Write a program which copies contents of source singly linear linked list to
singly linear destination linked list.
Function Prototype : int LLCopy(PPNODE Src, PPNODE Dest);
Input source linked list : |30|->|30|->|70|->|80|->|90|->|100|
Input destination linked list : Empty (NULL)
Output destination linked list : |30|->|30|->|70|->|80|->|90|->|100|

*/

#include "header.h"
void LLCopy(PPNODE Src, PPNODE Dest)
{
	if (Src == NULL)
	{
		return;
	}
	PNODE head = NULL, temp = *Src, temp2 = NULL,temp3=NULL;

	head = (PNODE)malloc(sizeof(NODE));
	head->Data = temp->Data;
	head->Next = NULL;

	temp = temp->Next;

	while (temp != NULL)
	{
		temp2 = (PNODE)malloc(sizeof(NODE));
		temp2->Data = temp->Data;
		temp2->Next = NULL;
		if (head->Next == NULL)
		{
			temp3=head->Next = temp2;
		}
		temp3 = temp3->Next = temp2;
	
		temp = temp->Next;
	}

	*Dest = head;
}