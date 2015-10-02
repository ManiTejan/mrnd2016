#include<stdio.h>
#include<conio.h>
#include<malloc.h>

void main()
{
	char *s1, *s2, *s3;
	int i = 0;
	s1 = (char*)malloc(sizeof(char));
	s2 = (char*)malloc(sizeof(char));
	s3 = (char*)malloc(sizeof(char));
	gets(s1);
	gets(s2);
	adder(s1, s2, s3);
	for (i = 0; s3[i] != '\0'; i++)
	{
		printf("%c", s3[i]);
	}
	getch();
}
int adder(char *s1, char *s2, char *s3)
{
	int i, j = 0, carry = 0;
	for (i = 0; s1[i] != '\0'; i++)
	{
		s3[i] = ((s1[i]-'0') + (s2[i]-'0'))  ;
		if (s3[i] < 9)
		{
			j = i;
		}
		else if (s3[i] > 9)
		{
			s3[i] = s3[i] - 10;
			carry++;
			s3[j] = s3[j] + carry;
			j++;
			while (j < i)
			{
				s3[j] = 0;
			}
		}
		else if (s3[i] == 0)
		{
			j = j;
		}
		s3[i] = s3[i] + '0';
	}
	s3[i] = '\0';
}