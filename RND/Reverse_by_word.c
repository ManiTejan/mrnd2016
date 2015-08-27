#include<stdio.h>
#include<conio.h>
void main()
{
	char s[50];
	int y,i=0;
	printf("Enter String:\n");
	gets(s);
	y = strlen(s);
	rev(s, i, y-1);
	
	word(s);
	puts(s);
	scanf(" ");

}
int strlen(char s[50])
{
	int i;
	for  (i = 0; s[i] !='\0'; i++)
	{

	}
	return i;
}
int rev(char a[50], int i, int j)
{
	int t=0,k=0,l=0,c=0;
	k = i;
	l = j;
	for (c=0; c <= (l-k) / 2; c++)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
		j--;
		i++;
	}
	return a;
}
int word(char w[50])
{
	int i, f, l=0;
	for (i = 1; w[i-1] != '\0'; i++)
	{
		if (w[i] == ' '||w[i]=='\0')
		{
			f = l;
			l = i - 1;
			rev(w, f, l);
			l = l + 2;

		}
	}
	return w;
}