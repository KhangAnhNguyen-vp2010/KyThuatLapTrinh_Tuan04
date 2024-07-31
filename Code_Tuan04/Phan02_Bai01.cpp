#include <stdio.h>
#include <conio.h>

int sum(int n)
{
	if (n==1)
	{
		return 1;
	}
	else return n + sum(n - 1);
}

float sum_2(int n)
{
	if (n==1)
	{
		return 0.5;
	}
	else return (float) n / (n + 1) + sum_2(n-1);
}

int main()
{
	int n;
	printf("Nhap n:");
	scanf("%d", &n);
	printf("Ket Qua cua S(n)=1+2+3+...+n la: %d", sum(n));
	printf("\n----------------------------------\n");
	printf("Ket Qua cua S(n)=1/2 + 2/3 + ... + n/n+1 la: %.2f", sum_2(3));
	getch();
	return 0;
}