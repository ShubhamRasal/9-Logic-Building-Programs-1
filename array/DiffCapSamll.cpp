#include"Header.h"

int Diffrence(char arr[], int iSize)
{
	int i = 0;
	int cCount = 0, sCount = 0;

	for (i = 0;i < iSize;i++)
	{
		if ((arr[i] >= 65) && (arr[i] <= 90))
		{
			cCount++;
		}
		if ((arr[i] >= 97) && (arr[i] <= 122))
		{
			sCount++;
		}
	}
	return cCount - sCount;
}