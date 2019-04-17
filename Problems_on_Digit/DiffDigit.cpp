#include"Header.h"

int DiffDigit(LONG lNo)
{
	int iESum = 0;
	int iOSum = 0;
	UINT iDigit = 0;


	while (lNo != 0)
	{
		iDigit = lNo % 10;


		if ((iDigit % 2) != 0)
		{
			iOSum = iOSum + iDigit;
		}
		else
		{
			iESum = iESum + iDigit;
		}

		lNo = lNo / 10;

	}


	return iESum-iOSum;
}