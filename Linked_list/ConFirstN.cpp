/*
2.Write a program which accept two singly linear linked list from user and
concat first N elements of source linked list after destination linked list.
Function Prototype : int ConFirstN( PPNODE Src, PPNODE Dest,int no );
Input source linked list : |30|->|30|->|70|
Input destination linked list : |10|->|20|->|30|->|40|
Input number of elements : 2
Output destination linked list : |10|->|20|->|30|->|40|->|30|->|30|
*/

#include"header.h"
void ConFirstN(PPNODE Src, PPNODE Dest, int no)
{
	int i = 0;
	PNODE des1 = *Dest,src1=*Src;
	while (des1->Next != NULL)
	{
		des1 = des1->Next;
	}
	while ((src1 != NULL) && (i < no))
	{
		des1=des1->Next = src1;
		src1 = src1->Next;
		i++;
	}
	*Src = src1;
	des1->Next = NULL;
}
