#include"Header.h"

UINT MultDigit(LONG lNo)
{
	UINT iDigit = 0;
	UINT iMultAns = 1;

	while (lNo != 0)
	{
		iDigit = lNo % 10;
		if (iDigit != 0)
		{
			iMultAns = iMultAns*iDigit;
		}
		lNo = lNo / 10;

	}
	return iMultAns;
}