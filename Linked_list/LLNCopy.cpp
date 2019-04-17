/*
5.Write a program which copies first N contents of singly linear source linked
list to destination singly linear linked list.
Function Prototype : int LLNCopy(PPNODE Src, PPNODE Dest, int no);
Input source linked list : |30|->|30|->|70|->|80|->|90|->|100|
Input destination linked list : Empty (NULL)
Input no : 4
Output destination linked list : |30|->|30|->|70|->|80|
*/

#include"header.h"
void LLNCopy(PPNODE Src, PPNODE Dest, int no)
{
	if (Src == NULL)
	{
		return;
	}
	PNODE head = NULL, temp = *Src, temp2 = NULL, temp3 = NULL;
	int i = 1;
	head = (PNODE)malloc(sizeof(NODE));
	head->Data = temp->Data;
	head->Next = NULL;

	temp = temp->Next;

	while ((temp != NULL)&&(i<no))
	{
		temp2 = (PNODE)malloc(sizeof(NODE));
		temp2->Data = temp->Data;
		temp2->Next = NULL;
		if (head->Next == NULL)
		{
			temp3 = head->Next = temp2;
		}
		temp3 = temp3->Next = temp2;

		temp = temp->Next;
		i++;
	}

	*Dest = head;


}