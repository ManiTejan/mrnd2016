#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	scanf_s("%d", &n);
	printf("%d",sum(n));
	scanf_s(" ");
	return 0;
}
int sum(int n)
{
	int r,sum=0;
	while (n  != 0)
	{
		r = n % 10;
		n = n / 10;
		sum = sum + r;
	}
	if (sum != -52)
	{
		return (sum);
	}
	else
	{
		printf("invalid");
	}
}
