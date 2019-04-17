#include "Header.h"
int main(int argc, char * argv[])
{
	int iValue = 0;
	int iRet = 0;
	BOOL bRet = 0;
	int iChoice = 0;
	while (1)
	{
		printf("1.Check Even Odd\n");
		printf("2.Get Binary\n");
		printf("3.Check Prime\n");
		printf("0.Exit\n");
		scanf_s("%d", &iChoice);
		switch (iChoice)
		{
		case 1:

			printf("Enter Number\n");
			scanf_s("%d", &iValue);

			bRet = chk_EvenOdd(iValue);
			if (bRet == 1)
			{
				printf("Gven Number Is Even.\n");
			}
			else
			{
				printf("Given Number Is Odd\n");
			}
			break;
		case 2:
			printf("Enter Number\n");
			scanf_s("%d", &iValue);
			GetBinary(iValue);
			break;



		case 0:
			exit(1);


		default:
			printf("INVALID CHOICE\n");
			break;

		}
	}
}
