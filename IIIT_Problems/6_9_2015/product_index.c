#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100];
	int b[100];
	int c[100];
	int i, n;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	product(a, n,b);
	for (i = 0; i < n; i++)
	{
		printf("%d \t", b[i]);
	}
	printf("\n");
	prod1(a, n, b);
	for (i = 0; i < n; i++)
	{
		printf("%d \t", b[i]);
	}
	getch();
}
int product(int a[100], int n,int *b)
{
	int i,j;
	
	for (i = 0; i < n; i++)
	{
		b[i] = 1;
		for (j = 0; j < n; j++)
		{
			if (j != i)
			{
				b[i] = b[i] * a[j];
			}
		}
	}
	return(b);
}
int prod1(int a[100], int n, int *c)
{
	int i;
	for (i = n - 1; i >= 0; i--)
	{
		if (i == n - 1)
		{
			c[i] = a[i];
		}
		else {
			c[i] = c[i + 1] * a[i];
		}
	}
	for (i = 0; i < n; i++)
	{
		if (i > 0)
		{
			a[i] = a[i - 1] * a[i];
		}
		if (i == 0)
		{
			c[i] = c[i + 1];
		}
		else if (i==n-1)
		{
			c[i] = a[i - 1];
		}
		else
		{
			c[i] = c[i + 1] * a[i-1];
		}
		
	}
	/*for (i = 0; i < n; i++)
	{
		printf("%d \t", a[i]);
	}*/
	return (c);
}