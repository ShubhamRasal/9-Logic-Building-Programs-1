#include "Header.h"

UINT Generic(LONG lNo)
{
	UINT iDigit = 0;
	UINT iSum = 0;
	UINT iSum1 = 0;
	LONG lTemp = lNo;
	while (lTemp != 0)
	{
		iDigit = lTemp % 10;
		iSum = iSum + iDigit;
		//printf("%d us sum in up\n", sum);
		if (iSum > 9)
		{
			while (iSum!=0)
			{
				iDigit = iSum % 10;
			//	printf("%d is digit in while of sum*****\n", digit);
				iSum1 = iSum1 + iDigit;
				//printf("sum1  %d in genrirc\n", sum1);
				iSum = iSum / 10;
			}
			iSum = iSum1;
			iSum1 = 0;
		}
		lTemp = lTemp / 10;
	}
	
	return iSum;
}