#include"Header.h"

int Search(char arr[], int iSize,char cChar)
{
	int i = 0;
	int count = 0;
	char ch = cChar - 32;;

	if ((cChar >= 65) && (cChar <= 90))
	{
		ch = cChar + 32;
	}
	
	printf("%c char\n", ch);
	for (i = 0;i < iSize;i++)
	{
		if ((arr[i] == cChar) || (arr[i] ==ch))
		{
			printf("%d\t", i);
			count++;
		}
	}
	printf("\n\n\n");
	return count;
}