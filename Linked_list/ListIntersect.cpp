/*
3.Write a program which accepts two singly linear linked list from user and
check whether they are intersecting or not.
Function Prototype : BOOL ListIntersect( PNODE First, PNODE Second);
*/

#include"header.h"

BOOL ListIntersect(PNODE First, PNODE Second)
{
	int flag = 0;
	PNODE temp = Second;
	while (First != NULL)
	{
		
		while (temp != NULL)
		{
			if (First != temp)
			{
			
				temp = temp->Next;
			}
			else
			{
				flag = 1;
				break;
			}
		}
		temp = Second;
		First = First->Next;
	}
	if (flag==1)
	{
		printf("\nTRUE\n");
		return TRUE;
	}
	else
	{
		printf("\nFALSE\n");
		return FALSE;
	}
}
/*
//temp = second;
	//((temp->Next)->Next)->Next = (First->Next)->Next;
	//iRet = ListIntersect(First, second);

	*/