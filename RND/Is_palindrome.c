#include<stdio.h>
#include<conio.h>
void main()
{
	char a[50];
	printf("give the string:\n");
	gets(a);
	if (pal(a))
	{
		printf("Given string is palindrome");
	}
	else
	{
		printf("Given string is not palindrome");
	}
	scanf(" ");
}
int pal(char s[50])
{
	int i, j=0,n=0;
	for (i = 0; s[i] != '\0'; i++)
	{
		j++;
	}
	j = j - 1;
	for (i = 0; i<=j; i++)
	{
		if (s[i] == s[j])
		{
			j--;
			n++;
		}
		else
		{
			return 0;

		}
	}
	return 1;
}