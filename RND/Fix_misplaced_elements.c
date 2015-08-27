#include<stdio.h>
#include<conio.h>
int main()
{
	int a[50];
	int n, i;
	printf("Enter Size:\n");
	scanf("%d", &n);
	printf("Values\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	srtm(a, n);
	scanf(" ");
	return 0;
}

int srtm(int a[50], int s)
{
	int b[50];
	int  i, j=0, k=0,x=0,z=0;
	for (i = 0; i < s; i++)
	{
		if (a[0]>a[1]&&k==0)
		{
			b[j] = a[0];
			k++;
		}
		if (a[i - 1] < a[i] && a[i] > a[i + 1] || a[i - 1] > a[i] && a[i] < a[i + 1] )
		{
			b[j] = a[i];
			j++;
			k++;
		}
		if (a[s-2]>a[s-1])
		{
			b[j] = a[s-1];
			k++;
		}
	}
	j = 0,x=0;
	for ( i = 0; i < s; i++)
	{
		if (a[i] <= b[j+1] && a[i + 1] >= b[j+1] && z <= 1)
		{
			a[(i + 1)-x] = b[j+1];
			z++;
			x++;
			j--;
		}
	}

	/*for (i = 0; i < k;i++)
	printf("%d ->", b[i]);*/

	printf("Result:\n");
	for (i = 0; i < s; i++)
	{
		printf("%d ", a[i]);
	}
}