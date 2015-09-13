#include<stdio.h>
#include<conio.h>
void main()
{
	int n, size = 0;
	int a[100];
	scanf("%d", &n);
	size = comp(n, a);
	rev(a, size - 1);
	printf("%d", count(a, size - 1));
	getch();
}
int rev(int *a, int j)
{
	int i = 0, n, t;
	n = j;
	for (i = 0; i <= n / 2; i++)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
		j--;
	}

}
int comp(int n, int *a)
{
	int i = 0;
	while (n != 0)
	{
		a[i] = n % 10;
		n = n / 10;
		i++;
	}
	return i;
}
int fact(int n)
{
	int i, f = 1;
	for (i = 1; i <= n; i++)
	{ 
		f = f*i;
	}
	return(f);
}
int count(int *a, int n)
{
	int i, j, ind = 0, r = 0, d = 1;
	
	//------N4 complexity-----
	/*for (i = 0; i <= n; i++)
	{
		b[i] = 1;
		for (j = i; j <= n; j++)
		{
			for (k = j; k <= n; k++)
			{
				if (a[j]==a[k])
				{
					c++;
				}
			}
			b[i] = b[i] * fact(c);
			c = 0;
		}
		for (j = i; j <= n; j++)
		{
			if (a[i]>a[j])
			{
				ind++;
			}
		}
		b[i] = ind / b[i];
		ind = 0;
	}
	for (i = 0; i <= n; i++)
	{
		r = (b[i] * fact(n - i)) + r;
	}*/


	for (i = 0; i <= n; i++)
	{
		int c[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
		d = 1;
		ind = 0;
		for (j = i; j <= n; j++)
		{
			c[a[j]]++;
		}
		for (j = 1; j <= n; j++)
		{
			d = d*fact(c[j]);
		}
		for (j = i; j <= n; j++)
		{
			if (a[i] > a[j])
			{
				ind++;
			}
		}
		r = r + ((ind*fact(n - i)) / d);
		
	}




	return (r);
}