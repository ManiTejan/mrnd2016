#include<stdio.h>
#include<conio.h>
int main()
{
	
	
		char s[100];
		int k;
		gets_s(s,100);
		k = strln(s);
		printf("%d",k );
		//k = psl(s);
		//printf("%d",k);
		scanf_s(" ");
}
int strln(char c[100])
{
	int i, len = 0;
	for (i = 0; c[i] != '\0'; i++)
	{
		len++;
	}
	return(len);
}
int psl(int *p)
{
	int i,l=0;
	for  (i = 0; p+i !='\o' ; i++)
	{
		l++;
	}
	return l;

}