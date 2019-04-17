#include"Header.h"

void pattern(int arr[], int iSize)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < iSize;i++)
	{
		if ((arr[i] % 2) == 0)
		{
			while (j < arr[i])
			{
				printf("*\t");
				j++;
			}
			printf("\n");
		}
		j = 0;
		
	}

}