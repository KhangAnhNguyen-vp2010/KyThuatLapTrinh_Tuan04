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

int Sum_2(int n)
{
	if (n==1)
	{
		return 1;
	}
	else return powf(n,2)+Sum_2(n-1);
}

int tinhTong(int a)
{
	if (a==1)
	{
		return 1;
	}
	else return a+tinhTong(a-1);
}

int Sum_3(int n)
{
	if (n==1)
	{
		return 1;
	}
	else return tinhTong(n) + Sum_3(n-1);
}

int giaiThua(int a)
{
	if (a==1)
	{
		return 1;
	}
	else return a*giaiThua(a-1);
}

double Sum_4(int n)
{
	if (n==1)
	{
		return (double) -(1+2)/giaiThua(2);
	}
	else return (double) ( powf(-1,n)*(2*n-1)+2*n ) / giaiThua(2*n) + Sum_4(n-1);
}

int main()
{
	int n;
	printf("Nhap n:");
	scanf("%d", &n);
	printf("Ket qua cua S(n)=1/1.2.3 + 1/2.3.4 + 1/3.4.5 + ... + 1/n.(n+1).(n+2) la: %.2f", Sum_1(n));
	printf("\n------------------------------------\n");
	printf("Ket qua cua S(n)= 1^2 + 2^2 + ... + n^2 la: %d", Sum_2(n));
	printf("\n------------------------------------\n");
	printf("Ket qua cua S(n)=1+(1+2) + (1+2+3) + ... + (1+2+3+...+n) la: %d", Sum_3(n));
	printf("\n------------------------------------\n");
	printf("Ket qua cua S(n)= - (1+2/2!) + (3+4/2!) - (5+6/6!) + ... + (-1)^n * (2n-1)+(2n)/(2n)! la: %.2f", Sum_4(n));
	getch();
	return 0;
}