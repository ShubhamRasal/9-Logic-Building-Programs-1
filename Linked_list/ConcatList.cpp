/*

1.Write a program which accept two singly linear linked list from user and
concat source linked list after destination linked list.
Function Prototype : int ConcatList( PPNODE Src, PPNNODE Dest);
Input source linked list : |30|->|30|->|70|
Input destination linked list : |10|->|20|->|30|->|40|
Output destination linked list : |10|->|20|->|30|->|40|->|30|->|30|->|70|
*/

#include"header.h"

void ConcatList(PPNODE Src, PPNODE Dest)
{
	PNODE des1= *Dest;
	while (des1->Next != NULL)
	{
		des1 = des1->Next;
	}

	des1->Next = *Src;

	free(*Src);
}

