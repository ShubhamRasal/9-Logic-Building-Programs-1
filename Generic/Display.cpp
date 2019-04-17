/*1. Write generic program which accept one value and one number from user.Print
that value that number of times on screen.
Input : M 7
	Output : M M M M M M M
	Input : 11 3
	Output : 11 11 11
	Input : 3.7 6
	Output : 3.7 3.7 3.7 3.7 3.7 3.7
*/	
#include<iostream>
using namespace std;

template<class T>
void Display(T value, int iSize)
{
	for (int i = 0;i < iSize;i++)
	{
		cout << value << "\t";
	}
	cout << endl;
}

int main()
{
	Display('M', 7);
	Display(11, 3);
	Display(3.7, 6);

	return 0;
}

/*
output-:
M       M       M       M       M       M       M
11      11      11
3.7     3.7     3.7     3.7     3.7     3.7
*/