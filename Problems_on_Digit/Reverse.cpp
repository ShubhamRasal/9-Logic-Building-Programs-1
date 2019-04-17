#include"Header.h"

LONG Reverse(LONG lNo)
{
	UINT iDigit = 0;
	LONG lReverse = 0;

	while (lNo != 0)
	{
		iDigit = lNo % 10;
		lReverse = lReverse * 10 + iDigit;
		lNo = lNo / 10;
	}
	return lReverse;

}