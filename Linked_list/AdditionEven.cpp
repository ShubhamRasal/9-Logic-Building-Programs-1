/*
3. Write a program which returns addition of all even element from singly
linear linked list.
Function Prototype :int AdditionEven( PNODE Head);
Input linked list : |11|->|20|->|32|->|41|
Output : 52
*/

#include"Header.h"
int AdditionEven(PNODE Head)
{
	 int sum=0;
	while (Head != NULL)
	{
		if ((Head->Data%2)==0)
		{
			sum += Head->Data;
		}
		Head = Head->Next;
		
	}
	return sum;
}