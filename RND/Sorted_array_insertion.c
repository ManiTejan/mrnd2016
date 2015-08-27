#include<stdio.h>
#include<conio.h>

int srt(int a[50], int s)
{
	int k, j, i, x, z = 0;
	printf("Enter");
	scanf_s("%d", &k);
	j = 0;
	for (i = 0; i < s; i++)
	{
		if (a[0]>k)
		{
			for (x = s - 1; x>=0; x--)
			{
				a[x + 1] = a[x];
			}
			a[0] = k;
			z++;

		}
		if (a[i] <= k && a[i + 1] >= k&& z == 0)
		{

			for (x = s-1; x>i; x--)
			{
				a[x+1] = a[x];
			}
			a[i + 1] = k;
			z++;
		}
		if (a[s-1]<k)
		{
			a[s] = k;
			z++;
		}
	}
	for (i = 0; i <= s; i++)
	{
		printf("%d ", a[i]);
	}

}
int main()
{
	int a[50];
	int n, i;
	printf("Enter size:\n");
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("Enter %d value: ",i);
		scanf_s("%d", &a[i]);
	}
	srt(a,n);
	scanf_s(" ");
	return 0;
}