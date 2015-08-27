#include<stdio.h>
void main()
{
	char k[30];
	gets(k);
	kth(k);
	
}
int kth(char a[50])
{
	int i,k,j=0;
	printf("Enter index\n");
	scanf("%d", &k);
	printf("\n =>");
	if (k == 0)
	{
		printf("Null");
	}
	for ( i = k; a[i] != '\0'; i++)
	{
		j++;
		
	}
	if (j != 0)
	{
		printf("%c", a[j]);
	}
	else
	{
		printf("invalid");
	}
	scanf(" ");
}
