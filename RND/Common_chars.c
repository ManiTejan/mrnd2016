#include<stdio.h>
#include<conio.h>
void main()
{
	char s1[50],s2[50];
	printf("Enter String:\n");
	gets(s1);
	printf("Enter String:\n");
	gets(s2);
	common(s1,s2);
	
}
int common(char a[50],char b[50])
{
	int c[50], d[50];
	char s[50];
	int i, j,k=0;
	for (i = 0; i < 26; i++)
	{
		c[i] = 0;
		d[i] = 0;
	}
	for (i = 0; i < 26; i++)
	{
		s[i] = 'a' + i;
	}
	for (i = 0; a[i] != '\0'; i++)
	{
		++c[a[i] - 'a'];
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		++d[b[i] - 'a'];
	}
	
	for (i = 0; i< 26; i++)
	{
		if ((c[i] >= 1) && (d[i]>=1))
		 printf("%c ", s[i]);
	}
	scanf(" ");
}