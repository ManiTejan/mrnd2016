#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	int f = 0, s = 1, t;
	printf("Enter Value");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		t = f + s;
		f = s;
		s = t;
	}

	printf("value of index %d is : %d",n,t);
	scanf_s(" ");
}