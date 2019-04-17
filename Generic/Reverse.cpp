/*5. Write generic program to accept N values and reverse the contents.
Input : 10 20 30 10 30 40 10 40 10
	Output : 10 40 10 40 30 10 30 20 10
	
*/
#include<iostream>
using namespace std;

template<class T>
void Reverse(T *arr, int iSize)
{
	T temp;
	int i = 0, j = iSize - 1;
	for ( ;i < j; i++, j--)
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
}


int main()
{
	int arr[] = { 10,20,30,10,30,40,10,40,10 };
	for (int i = 0;i<9;i++)
	{
		cout << arr[i] << "\t"; // 10 20 30 10 30 40 10 40 10
	}
	cout << endl;
	Reverse(arr, 9);

	for (int i = 0;i<9;i++)
	{
		cout << arr[i] << "\t"; // 10 40 10 40 30 10 30 20 10
	}
	return 0;
}