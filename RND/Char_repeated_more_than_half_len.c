#include<stdio.h>
#include<conio.h>
void main()
{
	char s[50];
	printf("Enter String:\n");
	gets(s);
	rep(s);
}
int rep(char a[50])
{
	int i, n, len = 0,count=0;
	int b[50];
	char c[50];
	for (i = 0; i < 26; i++)
	{
		b[i] = 0;
	}
	for (i = 0; a[i] != '\0'; i++)
	{
		len++;
		++b[a[i] - 'a'];
	}
	n = len / 2;

	for (i = 0; i < 26; i++)
	{
		c[i] = 'a'+i;
		if (b[i] > n&& count==0)
		{
			printf("%c", c[i]);
			count++;
		}
	}
	
	scanf(" ");
}