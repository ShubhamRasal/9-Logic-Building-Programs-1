/*
5.Write a program which accept singly linear linked list from user and check
whether list contains loop or not.
Function Prototype : int LoopChk(PNODE Src);
To check working of this function create loop in the linked list.
*/

#include "Header.h"


int LoopChk(PNODE Src)
{
	PNODE slow, fast;
	slow = fast = NULL;
	int flag = 0;
	slow = Src;
	fast = Src;
	while (slow&&fast&&fast->Next)
	{
		slow = slow->Next;
		fast = (fast->Next)->Next;

		if (slow == fast)
		{
			printf("loop found");
			return 1;
			break;
		}
	}
	return 0;

}