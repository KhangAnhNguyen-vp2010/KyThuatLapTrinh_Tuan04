#include <stdio.h>
#include <conio.h>
#include <math.h>
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

double sum_3(int n)
{
	if (n==1)
	{
		return sqrtf(5);
	}
	else return sqrtf(5 + sum_3(n-1));
}

double sum_4(int n)
{
	if (n==0)
	{
		return 1;
	}
	else return (double) 1/(2*n+1) + sum_4(n-1); 
}

int main()
{
	int n;
	printf("Nhap n:");
	scanf("%d", &n);
	printf("Ket Qua cua S(n)=1+2+3+...+n la: %d", sum(n));
	printf("\n----------------------------------\n");
	printf("Ket Qua cua S(n)=1/2 + 2/3 + ... + n/n+1 la: %.2f", sum_2(3));
	printf("\n----------------------------------\n");
	printf("Ket Qua cua S(n)= sqrt(5 + sqrt(5 + ...  + sqrt(5 + sqrt(5)))) la: %.2f", sum_3(n));
	printf("\n----------------------------------\n");
	printf("Ket Qua cua S(n)= 1 + 1/3 + 1/5 + ... + 1/2n+1 la: %.2f", sum_4(n));
	getch();
	return 0;
}