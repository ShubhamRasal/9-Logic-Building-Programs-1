#include"header.h"

void Display(PNODE temp)
{
	while (temp != NULL)
	{
		printf("|%d|->", temp->Data);
		temp = temp->Next;
	}
	printf("\n");
}