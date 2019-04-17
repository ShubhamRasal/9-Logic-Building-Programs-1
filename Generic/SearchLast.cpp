/*4. Write generic program to accept N values and search last occurrence of any
specific value.
Input : 10 20 30 10 30 40 10 40 10
Value to search : 40 
Output : 8
*/

#include<iostream>
using namespace std;

template<class T>
int SearchLast(T *arr, int iSize, T iNo)
{
	int i;

	for (i = iSize;i >= iSize;i--)
	{
		if (arr[i] == iNo)		{			break;		}
	}
	if (i < iSize)
	{
		return i;
	}
	else
	{
		return -1;
	}
}int main()
{
int arr[]={10,20,30,10,30,40,10,40,10};
int iRet = SearchLast(arr,9,40);
cout << iRet << endl;
return 0;
}
