#include<stdio.h>
#include<conio.h>
#include<malloc.h>
void main()
{
	char *s1, *s2, *s3;
	s1 = (char*)malloc(sizeof(char));
	s2 = (char*)malloc(sizeof(char));
	s3 = (char*)malloc(sizeof(char));
	gets(s1);
	gets(s2);
	adder(s1, s2, s3);
	for (int i = 0; s3[i] != '\0'; i++)
	{
		printf("%d", s3[i]);
	}
	getch();
	
}
int reverse(char *s)
{
	int len, i, temp, j;
	len = strlen(s);
	j = len;
	for (i = 0; i <= len / 2; i++)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j--;
	}
}
int strlen(char s[])
{
	int i;
	for (i = 0; s[i] != '\0'; i++)
	{
		
	}
	return (i - 1);
}

{
	int i, j, len1, len2, carry = 0, maxlen;
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (len1 <= len2)
	{
		maxlen = len2;
	}
	else
	{
		maxlen = len1;
	}
	s3[maxlen + 1] = '\0';
	for ( i = maxlen; i >=0; i--)
	{
		if (len1 < 0&&len2>=0)
		{
			s3[i] = (carry + s2[len2]) - 48;
			carry = 0;
		}
		else if (len2 < 0 && len1 >= 0)
		{
			s3[i] = (carry + s1[len1]) - 48;
			carry = 0;
		}
		else if (len1>=0&&len2>=0)
		{
			s3[i] = (carry + s1[len1] + s2[len2]) - 96;
			carry = 0;
		}
		if (s3[i] > 9)
		{
			carry = 1;
			s3[i] = s3[i] - 10;
		}
		/*else if (s3[i]>0&&s3[9]<9)
		{
			carry = 0;
		}*/
		//printf("%d", s3[i]);
		len1--;
		len2--;
	}
}