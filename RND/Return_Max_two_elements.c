#include<stdio.h>
#include<conio.h>
void main()
{
	int max1, max2, n, i,k[2];
	int a[50];
	printf("Enter size");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("Enter value in index %d is:",i);
		scanf("%d", &a[i]);
	}
	max(a, n, k);
	printf("\n %d is the first max", k[0]);
	printf("\n %d is the second max", k[1]);
	scanf(" ");

}
int max(int a[50], int s,int *b)
{
	int i;
	if (a[0]>a[1])
	{
		b[0] = a[0];
		b[1] = b[1];
	}
	else
	{
		b[0] = a[1];
		b[1] = a[0];
	}
	for ( i = 2; i < s; i++)
	{
		

		if (a[i]>b[0])
		{
			b[1] = b[0];
			b[0] = a[i];
		}
		else
		{
			if (a[i]>b[1])
			{
				b[1] = a[i];
			}
		}

	}
}