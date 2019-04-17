#include"Header.h"

UINT OccurDigit(LONG lNo,UINT iValue)
{
	UINT iDigit = 0;
	UINT iCnt = 0;
	while (lNo != 0)
	{
		iDigit = lNo % 10;

		if (iDigit == iValue)
		{
			iCnt++;
		}
		lNo = lNo / 10;
	}

	return iCnt;

}