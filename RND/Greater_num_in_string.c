#include<stdio.h>
#include<conio.h>
void main()
{
	char s1[30], s2[30];
	char r;
	printf("Enter first string:\n");
	gets_s(s1,30);
	printf("Enter second string:\n");
	gets_s(s2,30);
	
	grt(s1, s2);

}
int grt(char n1[30], char n2[30])
{
	int l1=0, l2=0;
	int i,j,count=0;
	
	for (i = 0; n1[i] != '\0'; i++)
	{
		l1++;
	}
	for ( i = 0; n2[i] != '\0'; i++)
	{
		l2++;
	}

	for (i = 0; n1[0] == '0'; i = i)
	{
		if (n1[0]=='0')
		{
			for (j = 0; j < l1; j++)
			{
				if (j != l1 - 1)
				{
					n1[j] = n1[j + 1];
				}
				
			}
			n1[l1] = '\0';
			l1 = l1 - 1;
		}
		n1[l1] = '\0';
	}
	for (i = 0; n2[0] == '0'; i = i)
	{
		if (n2[0] == '0')
		{
			for (j = 0; j < l2; j++)
			{
				if (j != l2 - 1)
				{
					n2[j] = n2[j + 1];
				}

			}
			n2[l2] = '\0';
			l2 = l2 - 1;
		}
		n2[l2] = '\0';
	}
	if (l1 == l2)
	{
		for (int i = 0; i < l1; i++)
		{
			if (n1[i] < n2[i])
			{
				printf("gretest value is :");
				puts(n2);
				break;
			}
			else if (n1[i]>n2[i])
			{
				printf("gretest value is :");
				puts(n1);
				break;
			}
			else if (n1[i] == n2[i])
			{
				count++;
			}
			
		}
		if (count == l1)
		{
			printf("EQUAL");
		}
	}
	else if (l1>l2)
	{
		printf("gretest value is :");
		puts(n1);
	}
	else if (l2>l1)
	{
		printf("gretest value is :");
		puts(n2);
	}


	scanf_s(" ");
}