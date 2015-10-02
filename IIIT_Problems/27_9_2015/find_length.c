#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[100];
	int i, j, num;
	scanf("%d", &num);
	for (i = 0; i < num; i++)
		scanf("%d", &arr[i]);
	printf("%d", len(arr));
	getch();
}
int len(int a[100])
{
	int i = 1, add = 1, div = 1;
	while(!(a[i] > a[i + 1] && a[i] > a[i - 1]))
	{
		if (a[i] != 0 && a[i] != '\0' && a[i]>0)
		{
			if (i%add == 0)
			{
				add = i;
				div = add;				
			}
			i = i * 2;
		}
		else if (a[i] == 0 || a[i] == '\0' || a[i]<0)
		{
			i = add + div / 2;
			div = div / 2;
			if (div < 2)
			{
				add = add / 2;
				div = add;
			}
		}
		
	}
	return(i);
}
