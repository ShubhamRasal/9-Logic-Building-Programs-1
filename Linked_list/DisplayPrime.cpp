/*
2. Write a program which displays all elements which are prime from singly
linear linked list.
Function Prototype :int DisplayPrime( PNODE Head);
Input linked list : |11|->|20|->|17|->|41|->|22|->|89|
Output : 11 17 41 89
*/

#include"Header.h"

void DisplayPrime(PNODE Head)
{
	int i = 0;
	while (Head != NULL)
	{
		for (i = 2; i <= (Head->Data / 2); i++)
		{
			if ((Head->Data) % i == 0)
			{
				break;
			}
		}
		if (i == (Head->Data/2+1))
		{
			printf("%d\t", Head->Data);
		}
		Head = Head->Next;
		i =0;
	}
	printf("\n");
}