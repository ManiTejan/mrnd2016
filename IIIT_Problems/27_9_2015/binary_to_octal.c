#include<stdio.h>
#include<conio.h>
void main()
{
	int dec, arr[100], n = 0, i = 0;
	printf("Enter your Binary Number\n");
	scanf("%d", &dec);
	while (dec != 0)
	{
		arr[i] = dec % 10;
		dec = dec / 10;
		i++;
	}
	n=octal(arr, i - 1);
	//printf("%d\n", n);
	for (i = n; i >= 0; i--)
	{
		printf("%d", arr[i]);
	}
	getch();
}
int octal(int *arr, int *size)
{
	int i, count=0, sum=0, val = 1;
	for (i = 0; i <= size; i++)
	{
		sum = (arr[i] * val) + sum;
		val = val * 2;
		if ((i + 1) % 3 == 0||i==size)
		{
			arr[count] = sum;
			count++;
			val = 1;
			sum = 0;
		}
	}
	return(count-1);
	
}