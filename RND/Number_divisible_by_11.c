#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	printf("Enter value:\n");
	scanf("%d", &a);
	if (div(a))
	{
		printf(" Divisible by 11");
	}
	else
	{
		printf("Not divisible by 11");
	}
	scanf(" ");
}
int div(int n)
{
	int  i=0,a[50],o=0,e=0,r=0,d;
	if (n < 0)
	{
		n = 0 - n;
	}
	while (n != 0)
	{
		r = n % 10;
		if (i % 2 == 0)
		{
			o = o + r;
			i++;
		}
		else
		{
			e = e + r;
			i++;
		}
		n = n / 10;
	}
	d = e - o;
	if (d < 0)
	{
		d = 0 - d;
	}
	if (d == 0 || d == 11)
	{
		return 1;
	}
	else if (d>11)
	{
		return(div(d));
	}
	else if (d<11)
	{
		return 0;
	}
}