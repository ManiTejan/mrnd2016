#include<stdio.h>
#include<conio.h>
void binary(int number);
void main()
{
	int num;
	scanf("%d", &num);
	binary(num);
	getch();
}
void binary(int number)
{
	int arr[100], i = 0, n, j;
	n = number;
	while (n != 0)
	{
		arr[i] = n % 2;
		n = n / 2;
		i++;
	}
	n = i;
	for (i = 0; i < n; i++)
	{
		if (i % 2 == 1)
		{
			if (i == n - 1)
			{
				n++;
			}
			if (arr[i + 1] == 0 || arr[i + 1] == 1)
			{
				arr[i + 1] = arr[i + 1] + 1;
			}
			else
			{
				arr[i + 1] = 1;
			}
		}
		if (arr[i] > 1)
		{
			if (i == n - 1)
			{
				n++;
			}
			if (arr[i + 1] == 0 || arr[i + 1] == 1)
			{
				arr[i + 1] = arr[i + 1] + 1;
			}
			else
			{
				arr[i + 1] = 1;
			}

			if (arr[i] % 2 == 0)
			{
				arr[i] = 0;
			}
			else
			{
				arr[i] = 1;
			}
		}
	}

	for (j = i - 1; j >= 0; j--)
	{
		printf("%d", arr[j]);
	}
}