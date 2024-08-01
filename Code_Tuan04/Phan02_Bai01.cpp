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

int sum_5(int n)
{
	if (n==1)
	{
		return 2;
	}
	else return n*(n+1) + sum_5(n-1);
}

int giaiThua(int a)
{
	if (a==1)
	{
		return 1;
	}
	else return a*giaiThua(a-1);
}

double sum_6(int n)
{
	if (n==1)
	{
		return giaiThua(2)/2+sqrtf(3);
	}
	else return (double) ( n*giaiThua(n+1)/(n+1) + sqrtf(n+2) ) + sum_6(n-1);
}

double sum_7(int n)
{
	if (n==1)
	{
		return 1+sqrtf(3) / 2+sqrtf(giaiThua(3));
	}
	else return (double) n+sqrtf(n+n+1) / (n+1) + sqrtf(giaiThua(n+2)) + sum_7(n-1);
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
	printf("\n----------------------------------\n");
	printf("Ket Qua cua S(n)= 1.2 + 2.3 + 3.4 + 4.5 + ... + n.(n+1) la: %d", sum_5(n));
	printf("\n----------------------------------\n");
	printf("Ket Qua cua S(n)= 1.2!/2+sqrt(3) + 2.3!/3+sqrt(4) + 3.4!/4+sqrt(5) + ... + n.(n+1)!/(n+1)+sqrt(n+2) la: %.2f", sum_6(n));
	printf("\n----------------------------------\n");
	printf("Ket Qua cua S(n)= 1+sqrt(1+2)/2+sqrt(3!) + 2+sqrt(2+3)/3+sqrt(4!) + 3+sqrt(3+4)/4+sqrt(5!) + ... + n+sqrt(n+n+1)/(n+1)+sqrt((n+2)!) la: %.2f", sum_7(n));
	getch(); 
	return 0;
}