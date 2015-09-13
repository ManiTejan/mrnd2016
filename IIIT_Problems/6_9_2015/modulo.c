#include<stdio.h>
#include<conio.h>
#include<malloc.h>
void main()
{
	unsigned x,y,a,n;
	printf("Enter X value:\n");
	scanf("%d", &x);
	printf("Enter Y value:\n");
	scanf("%d", &y);
	printf("Enter A value:\n");
	scanf("%d", &a);
	printf("\n \n1st_Method:\n");
	printf("%d", pow(x, y, a));
	printf("\n \n2nd_Method:\n");
	printf("%d",pow1(x, y, a));
	getch();
	
}

int pow(unsigned x, unsigned y, unsigned a)
{
	unsigned i,r=1;
	for (i = 0; i < y; i++)
	{
		r = r*x;

	}
	//printf("%d", r);
	if (a != 0)
	{
		r = r%a;
	}
	return (r);
}
int pow1(unsigned x, unsigned y, unsigned a)
{
	unsigned r = 1, i = 0, d = y;
	unsigned b[1000];
	for (i = 1; i <= y; i = i * 2)
	{
		
		if (i == 1)
		{
			
			b[i] = x%a;
		}
		else
		{
			
			b[i] = (b[i / 2] * b[i / 2]);
			b[i] = b[i] % a;

		}
	}

	for (i = i/2 ; i >= 1; i = i / 2)
	{
		if (d >= i)
		{
			r = (b[i] % a)*r;
			d = d - i;
		}
	}
	r = r%a;
	return(r);
}