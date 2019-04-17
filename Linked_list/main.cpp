
#include "header.h"

void InsertFirst(PPNODE Head, int no)
{
	PNODE newn = NULL;
	newn = (PNODE)malloc(sizeof(NODE));
	newn->Next = NULL;
	newn->Data = no;
	if (*Head == NULL)
	{
		*Head = newn;
	}
	else
	{
		newn->Next = *Head;
		*Head = newn;
	}
}
int main()
{
	int iRet = 0;
	PNODE First = NULL, second = NULL, temp = NULL;
	//InsertFirst(&First, 70);
	InsertFirst(&First, 60);
	InsertFirst(&First, 50);
	InsertFirst(&First, 40);
	InsertFirst(&First, 30);
	InsertFirst(&First, 20);
	InsertFirst(&First, 10);

	//InsertFirst(&second, 10);
	//InsertFirst(&second, 20);
	//InsertFirst(&second, 30);
	//InsertFirst(&second, 20);
	//InsertFirst(&second, 10);

	//Swap(&First);
	//InsertAt(&First, &second, 2);

	//temp = second;
	//((temp->Next)->Next)->Next = (First->Next)->Next;
	//iRet = ListIntersect(First, second);
	
	//iRet = ListPallindrom(First);
	//iRet = ListCmp(First, second);
	//Display(second);
	//Display(First);
	
	iRet = MiddleNode(First);
	printf("%d pos", iRet);
	return 0;
}

