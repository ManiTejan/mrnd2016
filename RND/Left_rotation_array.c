#include<stdio.h>
#include<conio.h>
void main()
{
	int a[50];
	int n,i;
	printf("Enter Size:\n");
	scanf("%d", &n);
	for ( i = 0; i < n; i++)
	{
		printf("Enter %d value: ",i);
		scanf("%d", &a[i]);
	}
	rot(a,n);
}
int rot(int a[50],int s)
{
	int x, r,i,j;
	printf("Enter no of rotations:\n");
	scanf("%d", &r);
	for ( i = 0; i < r; i++)
	{
		x = a[s - 1];
		for ( j = s-1; j >= 0; j--)
		{
			a[j] = a[j - 1];
			
		}
		a[0] = x;
		 
	}
	printf("Result:\n");
	for ( i = 0; i < s; i++)
	{
		printf("%d ", a[i]);
	}
	scanf(" ");
}