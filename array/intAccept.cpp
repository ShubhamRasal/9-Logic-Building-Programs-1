#include"Header.h"

void accept(int *Brr, int iLength)
{
	int iCnt = 0;
	printf("Enter Elements\n");
	for (iCnt = 0;iCnt < iLength;iCnt++)
	{
		scanf_s("%d", &Brr[iCnt]);
	}
}

void Faccept(float *Brr, int iLength)
{
	int iCnt = 0;
	printf("Enter Elements\n");
	for (iCnt = 0;iCnt < iLength;iCnt++)
	{
		scanf_s("%f", &Brr[iCnt]);
	}
}

void Caccept(char *Brr, int iLength)
{
	int iCnt = 0;
	//printf("%d\n", iLength);
	//while (getchar() != '\n');
	printf("Enter Charater\n");
	for (iCnt = 0;iCnt < iLength;iCnt++)
	{
		scanf_s(" %c", &Brr[iCnt]);
		fflush(stdin);
	}
}
