#include <stdio.h>
#include<conio.h>
#include<malloc.h>

void main()
{
	int n = 0, num;
	int *a;
	a = (int *)malloc(sizeof(int));
	scanf("%d", &num);
	while (num != 0)
	{
		a[n] = num % 10;
		num = num / 10;
		n++;
	}
	sort(a, 0, n - 1);
	permute(a, 0, n - 1);
	getch();
	
}
int swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
int permute(int *a, int start, int last)
{
	int i, j;
	if (start == last)
	{
		for (j = 0; j <= last; j++)
		{
			printf("%d", a[j]);
		}
		printf("\n");
	}
	else
	{
		for (i = start; i <= last; i++)
		{
			swap((a + start), (a + i));
			permute(a, start + 1, last);
			swap((a + start), (a + i));
		}
	}
}
int sort(int *a, int intial, int end)
{
	int pivot, j, i, temp;
	if (intial<end)
	{
		pivot = intial;
		i = intial;
		j = end;
		while (i<j)
		{
			while (a[i] <= a[pivot] && i<end)
				i++;
			while (a[j]>a[pivot])
				j--;
			if (i<j)
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
		temp = a[pivot];
		a[pivot] = a[j];
		a[j] = temp;
		sort(a,intial, j - 1);
		sort(a,j + 1, end);
	}
}
