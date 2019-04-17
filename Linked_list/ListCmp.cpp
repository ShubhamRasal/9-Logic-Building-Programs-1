/*
5.Write a program which accepts two singly linear linked list from user and
compare both linked list.
Function Prototype : BOOL ListCmp( PNODE First, PNODE Second);
Input linked list 1 : |60|->|70|->|50|->|40|->|30|->|10|->|20|
Input linked list 2 : |60|->|70|->|50|->|40|->|30|->|10|->|20|
Output linked list : Both the linked list are equal.
*/

#include "header.h"

BOOL ListCmp(PNODE First, PNODE Second)
{
	while ((First&&Second)&&(First->Data==Second->Data))
	{
		printf("%d\t%d", First->Data, Second->Data);
		First = First->Next;
		Second = Second->Next;
	}

	if (First ==NULL && Second == NULL)
	{
		//printf("TRUE");
		return TRUE;
	}
	else
	{
		printf("FALSE");
		return FALSE;
	}
}

/*
iRet = ListCmp(First, second);
*/