#include"Header.h"

void ArrayReplace(char arr[], int iSize)
{
	int i = 0;
	
	for (i = 0;i < iSize;i++)
	{
		if ((arr[i] < 65) || (arr[i] > 122) || ((arr[i] > 90) && (arr[i] < 97)))
		{
			continue;
		}
		if ((arr[i] >= 65) && (arr[i] <= 90))
		{
			arr[i] = arr[i] + 32;
		}
	}
}