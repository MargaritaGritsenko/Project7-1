#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "RU");
	char c;
	printf("Введите символ: ");
	scanf("%c", &c);
	switch (c)
	{
	case '0':
		printf("это цифра\n");
		break;
	case '1':
		printf("это цифра\n");
		break;
	case '2':
		printf("это цифра\n");
		break;
	case '3':
		printf("это цифра\n");
		break;
	case '4':
		printf("это цифра\n");
		break;
	case '5':
		printf("это цифра\n");
		break;
	case '6':
		printf("это цифра\n");
		break;
	case '7':
		printf("это цифра\n");
		break;
	case '8':
		printf("это цифра\n");
		break;
	case '9':
		printf("это цифра\n");
		break;
	default:
		printf("это буква\n");
	}
	return 0;
}