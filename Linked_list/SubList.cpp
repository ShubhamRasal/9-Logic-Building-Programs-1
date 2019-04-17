/*
2.Write a program which accept source singly linear linked list and
destination singly linear linked list and check whether source list is sub list
of destination list. Function returns first position at which sub list found.
Function Prototype : int SubList(PPNODE Src, PPNODE Dest);
Input source linked list : |73|->|80|->|70|
Input dest list: |10|->|73|->|80|->|17|->|22|->|73|->|80|->|70|->|21|
Output : First Sub list found at position 6
*/

#include"Header.h"

int SubList(PPNODE Src, PPNODE Dest)
{
	int pos = 0, flag = 0,i=1;
	PNODE src1 = *Src, des1 = *Dest,temp=*Src;

	while (des1 != NULL)
	{
		if (des1->Data == src1->Data)
		{
			pos = i;
			if (src1->Next == NULL)
			{
				flag = 1;
			}

			while ((des1 != NULL) && (src1 != NULL))
			{
				if (des1->Data == src1->Data)
				{
					flag = 1;
					src1 = src1->Next;
					des1 = des1->Next;
					i++;
				}
				else if(flag!=1)
				{
					break;
				}
				else
				{
					flag = 0;
				}
				
			}
		}
		if ((flag == 1)&&(src1==NULL))	//&&(des1!=NULL))
		{
			break;
		}
		else
		{
			flag = 0;
		}
		
		src1 = *Src;
		
		if (des1!= NULL)
		{
			des1 = des1->Next;
		}
		
		i++;
	}

	if ((flag == 1) && (pos != 0))
	{
		printf("allore baba\n");
	    return pos;
	}
	else
	{
		return 0;
	}
}