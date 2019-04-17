#include"Header.h"


void DisplayOcc(LONG lNo)
{
	UINT iDigit = 0;
	int iCnt = 0;
	int i = 0;
	LONG lTemp = lNo;
	for (i = 0;i <= 9;i++)
	{
		while (lTemp != 0)
		{
			iDigit = lTemp % 10;
			lTemp = lTemp / 10;
			if (iDigit == i)
			{
				iCnt++;
			}
		}
		printf("%d :=> %d\n", i, iCnt);
		iCnt = 0;
		lTemp = lNo;
	}
}