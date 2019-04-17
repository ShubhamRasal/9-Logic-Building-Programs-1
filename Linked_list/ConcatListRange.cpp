/*
3.Write a program which accepts two singly linear linked list from user and
also accept range and concat elements of source singly linear linked list from
that range after singly linear destination linked list.
Function Prototype : int ConcatListRange( PPNODE Src,
PPNODE Dest,
int start,
int end);
Input source linked list : |30|->|30|->|70|->|80|->|90|->|100|
Input destination linked list : |30|->|40|
Input starting range : 2
Input ending range : 5
Output destination linked list : |30|->|40|->|30|->|70|->|80|->|90|

my op-:
dest list=|30|->|20|->|10|->|41|->|31|->|21|->
source list after op-: |51|->|11|->


*/

#include "header.h"

void ConcatListRange(PPNODE Src,PPNODE Dest,int start,int end)
{
	int i = 0;
	PNODE des1 = *Dest, src1 =*Src,temp=*Src;
	while (des1->Next != NULL)
	{
		des1 = des1->Next;
	}
	//des1->Next = src1;

	while ((temp != NULL) && (i < start-1))
	{
		temp = temp->Next;
		i++;
	}
	while ((temp!= NULL) && (i < end))
	{
		des1 = des1->Next = temp;
		temp = temp->Next;
		i++;
	}
		
	src1->Next = des1->Next;
	des1->Next = NULL;


}
