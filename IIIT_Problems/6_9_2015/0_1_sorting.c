#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100], b[100];
	int n, i, sum = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		if (a[i]!=0 && a[i]!=1)
		{
			printf("Please Enter only 0's and 1's\n");
			i--;
		}
		else
		{
			sum = sum + a[i];
		}
		
	}
	sort1(a, n,b);
	for (i = 0; i < n; i++)
	{
		printf("%d", b[i]);
	}
	printf("\n");
	sort2(a, n, b,sum);
	for (i = 0; i < n; i++)
	{
		printf("%d", b[i]);
	}
	printf("\n");
	sort3(a, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	}
	printf("\n");
	getch();
}
int sort1(int a[100], int n,int *b)
{
	int i, count = 0,temp;
	for (i = 0; i < n; i++)
	{
		if (a[i] == 0)
		{
			count++;
		}
	}
	for (i = 0; i < n; i++)
	{
		if (i < count)
		{
			b[i] = 0;
		}
		else
		{
			b[i] = 1;
		}
	}	
}
int sort2(int a[100], int n, int *b,int sum)
{
	int i, count = 0;
	for (i = n - 1; i >= 0; i--)
	{
		if (sum > 0)
		{
			b[i] = 1;
			sum--;
		}
		else
		{
			b[i] = 0;
		}
	}
}
int sort3(int *a, int n)
{
	int i=0, j = n - 1;
	{
		while (i < n)
		{
			if (a[i] == 1 && a[j] == 0 && j>i)
			{
				a[i] = a[i] + a[j];
				a[j] = a[i] - a[j];
				a[i] = a[i] - a[j];
			}
			if (a[i] == 0||i>j)
			{
				i++;
			}
			if (a[j] == 1)
			{
				j--;
			}
		}
	}
}