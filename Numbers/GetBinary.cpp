#include "Header.h"
int arr[15];
int i = 0;
void GetBinary(int iNo)
{
	
	while (iNo)
	{
		arr[i] = iNo % 2;
		iNo = iNo / 2;
		i++;
	}
	i--;
	
	Display();


}

void Display()
{
	
	for (; i >= 0; i--)
	{
		printf("%d", arr[i]);
		
	}
	printf("\n\n");
}