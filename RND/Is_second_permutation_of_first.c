#include<stdio.h>
#include<conio.h>
void main()
{
	char s1[50], s2[50];
	printf("Enter string: ");
	gets(s1);
	printf("Enter string: ");
	gets(s2);
	if (per(s1, s2))
	{
		printf("TRUE");
	}
	else
	{
		printf("FALSE");
	}
	scanf(" ");
}
int per(char s1[50], char s2[50])
{
	int a[50], b[50];
	int i, j=0,len1=0,len2=0;
	for (i = 0; i < 26; i++)
	{
		a[i] = 0;
		b[i] = 0;
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		++a[s1[i] - 'a'];
		len1++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		++b[s2[i] - 'a'];
		len2++;
	}

	if (len1==len2)
	{
		for (i = 0; i < 26; i++)
		{
			if (a[i] == b[i] && a[i]>=1 && b[i]>=1)
			{
			
				j = j + a[i];
			}
			
		}

		if (len1 == j)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	
}