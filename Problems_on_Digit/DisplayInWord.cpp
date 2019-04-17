#include"Header.h"

void DisplayNo(LONG lNo)
{
	UINT iDigit = 0;

	while (lNo != 0)
	{
		iDigit = lNo % 10;

		switch (iDigit)
		{
		case 0:
			printf("Zero\t");
			break;
		case 1:
			printf("One\t");
				break;
		case 2:
			printf("Two\t");
			break;
		case 3:
			printf("Three\n");
			break;
		case 4:
			printf("Four\t");
			break;
		case 5:
			printf("Five\t");
			break;
		case 6:
			printf("Six\t");
			break;
		case 7:
			printf("Seven\t");
			break;
		case 8:
			printf("Eight\t");
			break;
		case 9:
			printf("Nine\t");
			break;
		default:
			printf("-----\t");
			break;
		}
		lNo = lNo / 10;

	}
}