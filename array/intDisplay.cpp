#include"Header.h"

void oneDisplay(int Brr[], int iLength)
{
	int iCnt = 0;
	for (iCnt = 0;iCnt < iLength;iCnt++)
	{
		printf("%d\t", Brr[iCnt]);
	}
	printf("\n\n");
}


void ConeDisplay(char Brr[], int iLength)
{
	int iCnt = 0;
	for (iCnt = 0;iCnt < iLength;iCnt++)
	{
		printf("%c\t", Brr[iCnt]);
	}

	
}