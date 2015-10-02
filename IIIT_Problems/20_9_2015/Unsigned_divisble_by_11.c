/*#include<stdio.h>
#include<conio.h>
#include<malloc.h>
void main()
{
	char *c;
	int n = 0, count = 0;
	c = (char*)malloc(sizeof(char));
	gets(c);
	divisible(c);
	divisible1(c);
	getch();
}
int divisible(char *str)
{
	int evn = 0, odd = 0, i, tsum;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			evn = evn + (str[i]);
		}
		else
		{
			odd = odd + (str[i]);
		}
	}
	tsum = evn - odd;
	if ((tsum-48) % 11 == 0)
	{
		printf("given value is divisible by 11\n");
	}
	else
	{
		printf("Given is not divisible by 11\n");
	}
}

int divisible1(char *str)
{
	int evn = 0, odd = 0, i, tsum;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			evn = evn + (str[i]-48);
		}
		else
		{
			odd = odd + (str[i]-48);
		}
	}
	tsum = evn - odd;
	if (tsum < 0)
	{
		tsum = 0 - tsum;
	}
	if (tsum == 0 || tsum == 11)
	{
		printf("Given number is divisible by 11");
		
	}
	else if (tsum<11)
	{
		printf("Given number is not divisible by 11");
	}
	else if (tsum > 11)
	{
		check(tsum);
	}
	
}
int check(int sum)
{
	int  i = 0, a[50], odd = 0, even = 0, reminder = 0, tsum;
	while (sum != 0)
	{
		reminder = sum % 10;
		if (i % 2 == 0)
		{
			odd = odd + reminder;
			i++;
		}
		else
		{
			even = even + reminder;
			i++;
		}
		sum = sum / 10;
	}
	tsum = even - odd;
	if (tsum < 0)
	{
		tsum = 0 - tsum;
	}
	if (tsum == 0 || tsum == 11)
	{
		printf("Given number is divisible by 11");
	}
	else if (tsum>11)
	{
		return(check(tsum));
	}
	else if (tsum<11)
	{
		printf("Given number is not divisible by 11");
	}
}
*/