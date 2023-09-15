#include <stdio.h>

int main()
{
	int a;
	printf("입력:");
	scanf_s("%d", &a);


	int ten_thousand;
	int thousand;
	int hundred;
	int ten;
	int one;
	int divider = 10000;

	ten_thousand = a / divider;
	a = a % divider;
	divider = divider / 10;
	
	thousand = a / divider;
	a = a % divider;
	divider = divider / 10;

	hundred = a / divider;
	a = a % divider;
	divider = divider / 10;

	ten = a / divider;
	a = a % divider;
	divider = divider / 10;

	one = a / divider;
	a = a % divider;
	divider = divider / 10;

	printf("%d만%d천%d백%d십%d", ten_thousand, thousand, hundred, ten, one);


}
