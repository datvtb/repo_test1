#include<stdio.h>
#include<string.h>
#include<conio.h>

int sum(int, int);

int main(int argc, char ** argv)
{
	int x = 10;
	int y = 20;

	printf("%d + %d = %d\n", x, y, sum(x, y));

	return 0;
}

int sum(int a, int b)
{
	return (a + b);
}
