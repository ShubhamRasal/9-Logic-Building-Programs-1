//3. Write generic program to accept N values from user and return addition of that
//values.

#include<stdio.h>

template<class T>
T AddN(T *arr, int iSize)
{
	T iSum=0;
	int i = 0;
	if (arr == NULL)
	{
		return 0;
	}
	for (i = 0;i<iSize;i++)
	{
		iSum =iSum+arr[i] ;
	}
	return iSum;
}
int main()
{
	int arr[] = { 10,20,30,40,50 };
	float brr[] = { 10.0f,3.7f,9.8f,8.7f };
	int iSum = AddN(arr, 5);
	printf("%d\n", iSum);
	float fSum = AddN(brr, 4);
	printf("%f\n", fSum);
	return 0;
}