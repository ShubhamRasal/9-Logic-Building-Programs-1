/*
4.Write a program which accept singly linear linked list from and check
whether linked list is palindrome or not.
Function Prototype : BOOL ListPallindrom(PNODE First );
Input linked list : |10|->|20|->|30|->|40|->|30|->|20|->|10|
Output : The given linked list is palindrome.

*/

#include "header.h"

BOOL ListPallindrom(PNODE First)
{
	PNODE temp = First->Next;
	PNODE current = First, end = NULL;
	int flag = 0;
	int i = 0,j=0;
	while (current->Next != end)
	{
		while (temp!=end)
		{
			//printf("inside if %d\t%d\n", temp->Data, current->Data);
			if ((temp->Data == current->Data) && (temp->Next == end))
			{
				printf("inside if %d\t%d\n", temp->Data, current->Data);
				flag = 1;
				end = temp;
				break;
			}
			else
			{
				printf("inside else %d\t%d\n", temp->Data, current->Data);
				flag = 0;
			}
			temp = temp->Next;
		}
		
		current = current->Next;
		temp = current->Next;
		if (flag != 1)
		{
			break;
		}
		
	}
	if (flag == 1)
	{
		printf("true\n");
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

/*
//iRet = ListPallindrom(First);
*/