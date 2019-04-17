#include"Header.h"

void AcceptChoice(int ch)
{
	int iLength = 0;
	int *Brr = NULL;
	char *Crr = NULL;
	int iRet = 0;
	float *Frr = NULL;
	char cChar = '\0';
	switch (ch)
	{
	case 1:

		printf("Enter Size of Array\n");
		scanf_s("%d", &iLength);
		Brr = (int *)calloc(iLength, sizeof(int));
		accept(Brr, iLength);
		ReverseArray(Brr, iLength);
		oneDisplay(Brr, iLength);
		free(Brr);
		break;
	case 2:

		printf("Enter Size of Array\n");
		scanf_s("%d", &iLength);
		Brr = (int *)calloc(iLength, sizeof(int));
		accept(Brr, iLength);
		SumArray(Brr, iLength);
		oneDisplay(Brr, iLength);
		free(Brr);
		break;

	case 3:
		fflush(stdin);
		printf("Enter Size of Array\n");
		scanf_s("%d", &iLength);
		Crr = (char *)calloc(iLength, sizeof(char));
		//while (getchar() != '\n');
		fflush(stdin);
		Caccept(Crr, iLength);
		iRet = ArrayCapital(Crr, iLength);
		//ConeDisplay(Crr, iLength);
		printf("Capital Count:=%d\n", iRet);
		free(Crr);
		break;
	case 4:

		printf("Enter Size of Array\n");
		scanf_s("%d", &iLength);
		Frr= (float *)calloc(iLength, sizeof(float));
		Faccept(Frr, iLength);
		Percentage(Frr, iLength);
		
		free(Frr);
		break;
	case 5:
		fflush(stdin);
		printf("Enter Size of Array\n");
		scanf_s("%d", &iLength);
		Crr = (char *)calloc(iLength, sizeof(char));
		//while (getchar() != '\n');
		fflush(stdin);
		Caccept(Crr, iLength);
		ArrayReplace(Crr, iLength);
		ConeDisplay(Crr, iLength);
		printf("\n\n");
		free(Crr);
		break;
	case 6:
		fflush(stdin);
		printf("Enter Size of Array\n");
		scanf_s("%d", &iLength);
		Crr = (char *)calloc(iLength, sizeof(char));
		//while (getchar() != '\n');
		fflush(stdin);
		Caccept(Crr, iLength);
		iRet = ArrayCountVowels(Crr, iLength);
		//ConeDisplay(Crr, iLength);
		printf("Vowel Count:=%d\n", iRet);
		free(Crr);
		break;

	case 7:
		fflush(stdin);
		printf("Enter Size of Array\n");
		scanf_s("%d", &iLength);
		Crr = (char *)calloc(iLength, sizeof(char));
		//while (getchar() != '\n');
		fflush(stdin);
		Caccept(Crr, iLength);
		fflush(stdin);
		printf("Enter Character you want to search\n");
		while (getchar() != '\n');
		scanf_s("%c", &cChar);
		iRet = Search(Crr, iLength,cChar);
		printf("Occurance :%d\n\n", iRet);
		
		free(Crr);
		break;
	case 8:
		fflush(stdin);
		printf("Enter Size of Array\n");
		scanf_s("%d", &iLength);
		Crr = (char *)calloc(iLength, sizeof(char));
		//while (getchar() != '\n');
		fflush(stdin);
		Caccept(Crr, iLength);
		iRet = Diffrence(Crr, iLength);
		
		printf("Differnce(count:capital-small):=%d\n", iRet);
		free(Crr);
		break;

	case 9:
		printf("Enter Size of Array\n");
		scanf_s("%d", &iLength);
		Brr = (int *)calloc(iLength, sizeof(int));
		accept(Brr, iLength);
		pattern(Brr, iLength);
		break;
	case 0:
		exit(1);
		break;
	}
}