
/*
1.Write a program which accept singly linear linked list and swap
consecutive elements from that linked list.
Function Prototype : int Swap(PPNODE Src);
Input linked list : |10|->|20|->|30|->|40|->|50|->|60|->|70|->|80|->|90|
Output linked list : |20|->|10|->|40|->|30|->|60|->|50|->|80|->|70|->|90|
*/


#include "header.h"

void Swap(PPNODE Src)
{
	int i = 0;
	PNODE temp, prev, head, current, next;
	prev=current = *Src;

	while (current!=NULL)
	{
		next = current->Next;
		if (next == NULL)//if number of nodes are odd 
		{				//it is must otherwise gives segment.fault
			break;
		}
		current->Next = next->Next;
		next->Next = current;
		if (i == 0)
		{
			*Src = next;
		}
		else
		{
			prev->Next = next;
			prev = current;
		}
		//if(current->Next!=NULL)
		current =current->Next;
		i++;
	}
}


//Swap(&First);
