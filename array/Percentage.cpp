#include"Header.h"

void Percentage(float arr[], int iSize)
{
	int i = 0;

	for (i = 0;i < iSize;i++)
	{
		if ((arr[i] > 100.00) || (arr[i] < 0))
		{
			continue;
		}

		if (arr[i] < 35)
		{
			printf("Result:Fail!!\tPer:%f\n\n",arr[i]);
		}
		else
			if (arr[i] < 50)
			{
				printf("Result:PASS!\tPer:%f\n\n", arr[i]);
			}
			else
				if (arr[i] < 60)
				{
					printf("Result:Second Class\tPer:%f\n\n", arr[i]);
				}
				else
					if (arr[i] < 70)
					{
						printf("Result:First Class\tPer:%f\n\n", arr[i]);
					}
					else
					{
						printf("First Class With Distinction\tPer:%f\n\n", arr[i]);
					}
	}
}