/*
5. Write a program which display addition of digits of element from singly
linear linked list.
Function Prototype :int SumDigit( PNODE Head);
Input linked list : |110|->|230|->|20|->|240|->|640|
Output : 2 5 2 6 10
*/
#include"Header.h"
void SumDigit(PNODE Head)
{
	int temp = 0,sum=0;
	while (Head != NULL)
	{
		temp = Head->Data;
		while (temp != 0)
		{
			sum += (temp % 10);
			temp /= 10;
		}
		printf("|%d|-> %d\t", Head->Data, sum);
		sum = 0;
		temp = 0;
		Head = Head->Next;
	}
}

