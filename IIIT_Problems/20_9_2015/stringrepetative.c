#include<stdio.h>
#include<conio.h>
#include<malloc.h>
void main()
{
	char *p, *q;
	int k, i;
	p = (char*)malloc(sizeof(char));
	q = (char*)malloc(k*sizeof(char));
	printf("Enter ur String\n");
	gets(p);
	printf("Enter no ofrepetations\n");
	scanf("%d", &k);
	repeat(p, q, k);
	div11(q);
	div3_1(q);
	/*for (i = 0; q[i] != '\0'; i++)
	{
		printf("%c", q[i]);
	}*/
	getch();
}
int repeat(char *p, char *q, int k)
{
	int i = 0, j = 0;
	while (k!=0)
	{
		if (p[i] == '\0')
		{
			k--;
			i = 0;
			//printf("\t%d\n", k);
		}
		//q[j] = (char*)malloc(1);
		q[j] = p[i];
		//printf("%c", q[j]);
		i++;
		j++;
	}
	q[j-1] = '\0';
}
int div11(char *q)
{
	int evn = 0, odd = 0, i, tsum;
	for (i = 0; q[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			evn = evn + q[i];
		}
		else
		{
			odd = odd + q[i];
		}
	}
	tsum = evn - odd;
	if ((tsum - 48) % 11 == 0)
	{
		printf("given value is divisible by 11\n");
	}
	else
	{
		printf("Given is not divisible by 11\n");
	}
}
int div3_1(char *q)
{
	int i = 0, sum = 0;
	while (q[i]!='\0')
	{
		sum = sum + q[i];
		i++;
	}
	if ((sum - 48) % 3 == 0)
	{
		printf("given value is divisible by 3\n");
	}
	else
	{
		printf("Given is not divisible by 3\n");
	}
}