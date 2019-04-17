/*
4. Write a program which return second maximum element from singly linear
linked list.
Function Prototype :int SecMaximum( PNODE Head);
Input linked list : |110|->|230|->|320|->|240|
Output : 240
*/

#include"Header.h"
int SecMaximum(PNODE Head)
{
	int i = 0;
	int max = Head->Data, secmax = Head->Data;
	while (Head != NULL)
	{
		if (max < Head->Data)
		{
			secmax = max;
			max = Head->Data;
		}
		else if ((secmax < Head->Data) && (max > Head->Data))
		{
			secmax = Head->Data;
		}
		else if (secmax == max)
		{
			secmax = Head->Data;
		}

		Head = Head->Next;
	}
	return secmax;
}