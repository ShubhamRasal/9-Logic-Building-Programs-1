/*
3.Write a program which accept source singly linear linked list from user and
copy the contents int o destination singly linear linked in ascending order.
Function Prototype : int CopyAsc(PPNODE Src,PPNODE Dest);
Input source linked list : |110|->|73|->|10|->|80|->|70|->|12|
Input destination linked list: Empty (NULL)
Output destination linked list: |10|->|12|->|70|->|73|->|80|->|110|
*/



#include"Header.h"

void CopyAsc(PPNODE Src, PPNODE Dest)
{
	//PNODE src1 = *Src, des1 = *Dest;// temp = NULL;
	//int i = 0, j = 0;

	if (Src == NULL)
	{
		return;
	}
	PNODE head = NULL, src = *Src, temp = NULL, des1 =*Dest;
	int i = 1;
	head = (PNODE)malloc(sizeof(NODE));
	head->Data = src->Data;
	head->Next = NULL;

	src = src->Next;
	des1 = head;
	while (src != NULL)
	{	
		while (des1!= NULL)
		{
			temp = (PNODE)malloc(sizeof(NODE));
			if ((des1->Next == NULL)&&(src->Data < des1->Data))
			{

				temp->Data = src->Data;
				temp->Next = head;
				head = temp;
				break;
			}
			if ((des1->Next == NULL) && (src->Data >= des1->Data))
			{
				temp->Data = src->Data;
				des1->Next=temp;
				temp->Next = NULL;
				break;
			}
			if ((src->Data < (des1->Next)->Data)&&(src->Data > des1->Data))
			{
				temp->Data = src->Data;
				temp->Next = des1->Next;
				des1->Next = temp;
				printf("%d   %d\t\n", ++i, temp->Data);
				break;
			}
			des1 = des1->Next;
		}//des while
		des1 = head;// ->Next;
		src = src->Next;
	}//src while
	
	*Dest = head;
}