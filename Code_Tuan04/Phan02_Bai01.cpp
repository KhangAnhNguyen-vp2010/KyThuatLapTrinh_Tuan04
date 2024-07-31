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

int main()
{
	int n;
	printf("Nhap n:");
	scanf("%d", &n);
	printf("Ket Qua cua S(n)=1+2+3+...+n la: %d", sum(n));
	getch();
	return 0;
}