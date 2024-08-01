#include <stdio.h>
#include <conio.h>
#include <math.h>

double Sum_1(int n)
{
	if (n==1)
	{
		return 1/6;
	}
	else return (double) 1/n*(n+1)*(n+2) + Sum_1(n-1);
}

int main()
{
	int n;
	printf("Nhap n:");
	scanf("%d", &n);
	printf("Ket qua cua S(n)=1/1.2.3 + 1/2.3.4 + 1/3.4.5 + ... + 1/n.(n+1).(n+2) la: %.2f", Sum_1(n));
	getch();
	return 0;
}