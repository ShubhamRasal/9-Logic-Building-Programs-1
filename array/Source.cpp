#include"Header.h"


int main()
{
	int ch = 0;

	while (1)
	{
	printf("\t1.ReverseArray\n");
	printf("\t2.SumElement\n");
	printf("\t3.ArrayCapital\n");
	printf("\t4.Percantage wise Class\n");
	printf("\t5.ArrayReplace(all to small)\n");
	printf("\t6.CountVowel\n");
	printf("\t7.Search(count occurance of char)\n");
	printf("\t8.Diff(capital-small)\n");
	printf("\t9.pattern\n");
	printf("\t0.exit\n");
	printf("Enter Choice\n");
	scanf_s("%d", &ch);

	AcceptChoice(ch);

	}
	
	return 0;
}
