#include "Header.h"

int main()
{
	LONG lValue = 0;
	UINT iRet = 0;
	int ch = -1;
	UINT iNum = 0;
	int i = 0;
	printf("1.MultDigit\n");
	printf("2.AddEvenDigit\n");
	printf("3.OccurDigit\n");
	printf("4.Display Number In Word\n");
	printf("5.Reverse Number\n");
	printf("6.AddOddDigit\n");
	printf("7.DiffDigit\n");
	printf("8.DisplayTotalOccurance\n");
	printf("9.Generic\n");
	printf("0.exit\n\n\t");
	scanf_s("%d", &ch);

	switch (ch)
	{
	case 1:
		printf("Enter Number\n");
		scanf_s("%ld", &lValue);
		iRet = MultDigit(lValue);
		printf("Multiplication := %d\n", iRet);
		break;

	case 2:
		printf("Enter Number\n");
		scanf_s("%ld", &lValue);
		iRet = EvenDigit(lValue);
		printf("Addition of Even Digit:= %d\n", iRet);
		break;
	

	case 3:
		
		
		for (i = 0;i < 3;i++)
		{
			printf("Enter Number\n");
			scanf_s("%d", &lValue);
			printf("Number want to check\n");
			scanf_s("%d", &iNum);
			iRet = OccurDigit(lValue, iNum);
			printf("Ocuurance of %d in %ld is '%d' times\n", iNum, lValue, iRet);
		}
		
		
		
		
		break;
	
	case 4:
		printf("Enter Number\n");
		scanf_s("%d", &lValue);
		DisplayNo(lValue);
		break;
	
	case 5:
		printf("Enter Number\n");
		scanf_s("%ld", &lValue);
		iRet = Reverse(lValue);
		printf("Reverse Number:= %d\n", iRet);
		break;

	case 6:
		printf("Enter Number\n");
		scanf_s("%ld", &lValue);
		iRet = OddDigit(lValue);
		printf("Addition of Odd Digit:= %d\n", iRet);
		break;

	case 7:
		printf("Enter Number\n");
		scanf_s("%ld", &lValue);
		iRet = DiffDigit(lValue);
		printf("Differnece addition of even digit and odd digit := %d\n", iRet);
		break;

	case 8:
		printf("Enter Number\n");
		scanf_s("%d", &lValue);
		DisplayOcc(lValue);
		break;

	case 9:
		printf("Enter Number\n");
		scanf_s("%d", &lValue);
		iRet=Generic(lValue);
		printf("Generic Root is:=> %d\n", iRet);
		break;



	case 0:

		exit(1);
		break;

	default:
		printf("INVALID CHOICE!!!!!!\n");
		break;
	}

	return 0;

}