#include<stdio.h>
#include<conio.h>
void main()
{
	char s2[50],s1[50];
	gets(s1);
	gets(s2);
	
	if (check(s1))
	{
		ins(s1, s2);
		
	}
	else
	{
		printf("can't insert");
	}
	scanf(" ");
}
int check(char *s)
{
	int i, j = 0, n = 1,k=0;
	int a[50];
	for (i = 0; i <= 10; i++)
	{
		a[i] = 0;
	}
	
	j = len(s);
	if (j%2 != 0)
	{
		return 0;
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == s[n])
		{
			a[k]++;
			n++;
		}
		else
		{
			k++;
			n++;
		}
	}
	if (a[0] == a[1])
	{
		return 1;
	}
	else
	{
		return 0;
	}

	
}
/*int ins(char *a, char *b)
{
	int i = 0,j,k=0,count=0,l = 0;
	char c[50];
	j = len(a);
	for (i = 0; a[i] != '\0'; i++)
	{
		if (i==j/2 && count==0)
		{
			count++;
			for ( k = 0; b[k] !='\0' ; k++)
			{ 
				c[l] = b[k];
				l++;
			}
		}
		c[l] = a[i];
		l++;
	}
	c[l] = '\0';
	puts(c);
	
}*/


int ins(char *a, char *b)
{
	int i = 0, j, k = 0, count = 0, l = 0;
	char c[50];
	j = len(a);
	for (i = 0; a[i] != '\0'; i++)
	{
		if (i < j / 2)
		{
			c[l] = a[i];
			l++;
		}
		if (i >= j / 2 && b[k]!='\0')
		{
			c[l] = b[k];
				l++;
				k++;
				i = i--;
		}
		if (i>=j/2&&b[k]=='\0')
		{
			c[l] = a[i];
			l++;
		}
	}
	c[l] = '\0';
	puts(c);
}


int len(char *s)
{
	int i,j=0;
	for (i = 0; s[i] != '\0'; i++)
	{
		j++;
	}
	return j;
}