#include<stdio.h>
#include<conio.h>
void main()
{
	int a[50];
	int n,i;
	printf("Enter size\n");
	scanf("%d", &n);
	for ( i = 0; i < n; i++)
	{
		printf("Enter value of index %d: ",i);
		scanf("%d", &a[i]);
	}
	sum(a,n);
}
int sum(int b[50], int s)
{
	
	int i, j, k,count=0;
	printf("Enter sum:\n");
	scanf("%d", &k);

	for ( i = 0; i < s; i++)
	{
		for (j = 0; j < count; j++)
		{
			
			if (b[i] == b[j])
			{
				break;
			}
		}
			if (j == count)
			{
				b[count] = b[i];
				count++;
			}		
	}

	/*for (i = 0; i < count; i++)
	{
		printf("%d", b[i]);
	}*/

	for (i = 0; i < count/2; i++)
	{
		for (j = 1; j < count; j++)
		{
			if (b[i] + b[j] == k)
			{
				printf("{%d,%d}\n", b[i], b[j]);
			}
		}
			
	}
	
	
	scanf(" ");
}