#include"Header.h"


void ReverseArray(int arr[], int iSize)
{
	int i = 0, j = 0;
	int iTemp = 0;
	int iDigit = 0;
	int iRev = 0;
	for (i = 0;i < iSize;i++)
	{
		iTemp = arr[i];

		while (iTemp != 0)
		{
			iDigit = iTemp % 10;
			iRev = iRev * 10 + iDigit;
			iTemp = iTemp / 10;
		}
		arr[i] = iRev;
		iRev = 0;
	}

}


