#include"Header.h"

int ArrayCapital(char arr[], int iSize)
{
	int i = 0;
	int count = 0;
	for (i = 0;i < iSize;i++)
	{
		if ((arr[i]>=65) && (arr[i]<= 90))
		{
			count++;
		}
	}

	return count;
}