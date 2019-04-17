#include"Header.h"

int ArrayCountVowels(char arr[], int iSize)
{
	int i = 0, count = 0;

	for (i = 0;i < iSize;i++)
	{
		if ((arr[i] == 'a') || (arr[i] == 'A') || (arr[i] == 'e') || (arr[i] == 'E')
			|| (arr[i] == 'o') || (arr[i] == 'O') || (arr[i] == 'u') || (arr[i] == 'U') || (arr[i] == 'i') || (arr[i] == 'I'))
		{
			count++;
		}
	}
	return count;
}