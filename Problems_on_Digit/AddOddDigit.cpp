#include"Header.h"

UINT OddDigit(LONG lNo)
{
	UINT iSum = 0;
	UINT iDigit = 0;


	while (lNo != 0)
	{
		iDigit = lNo % 10;


		if ((iDigit % 2) != 0)
		{
			iSum = iSum + iDigit;
		}

		lNo = lNo / 10;

	}


	return iSum;
}