#include<stdio.h>
#include<conio.h>
void main()
{
	int a, b;
	printf("enter values of X & Y is:\n");
	scanf("%d%d", &a, &b);
	printf("multiplication of X&Yis:\n");
	printf("%d", mul(a, b));
	getch();
}
int mul(int x, int y)
{
	int r = 0;
	while (y != 0)
	{
		if (y & 01)
		{
			r = r + x;
			//r = r^x;
			//printf("%d\t%d\t%d\n", x, y, r);
		}
		x <<= 1;
		y >>= 1;
	}
	return(r);
}