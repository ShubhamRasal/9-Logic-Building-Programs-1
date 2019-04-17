//4. Write generic program to accept N values from user and return largest values.

#include<stdio.h>
template<class T>
T Max(T *arr, int iSize)
{
	T max=arr[0];

	for (int i = 1;i < iSize;i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	
	}

	return max;
}
int main()
{
	int arr[] = { 10,20,30,40,50 };

	float brr[] = { 10.0f,3.7f,9.8f,8.7f };
	int iRet = Max(arr, 5);
	printf("%d\n", iRet); // 50
	float fRet = Max(brr, 4);
	printf("%f\n", fRet); //10.0
	return 0;
}