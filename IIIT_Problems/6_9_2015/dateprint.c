#include<stdio.h>
#include<conio.h>
void main()
{
	char s[50];
	printf("FORMATE \n\t DD-MM-YYYY:\n\t");
	gets(s);
	date(s);
	scanf(" ");
}
int date(char d[50])
{
	int i, j = 0, count = 0, k = 0, l = 0;
	int a[50];
	int b[50];
	int c[50];
	for (i = 0; d[i] != '\0'; i++)
	{
		if (d[i] == '-')
		{
			count++;
			i++;
		}
		if (count == 0)
		{
			a[j] = (int)d[i] - 48;
			j++;
		}
		else if (count == 1)
		{
			b[k] = (int)d[i] - 48;
			k++;
		}
		else if (count == 2)
		{
			c[l] = (int)d[i] - 48;
			l++;
		}
	}
	if (valid(a, b, c,j-1,k-1,l-1))
	{
		day(a, j - 1);
		printf(" - ");
		mon(b, k - 1);
		printf(" - ");
		if (l < 5)
		{
			year(c, l - 1);
		}
		else
		{
			printf("year formate is YYYY");
		}
	}
	else
	{
		printf(" NOT VALID ");
	}
}
int valid(int a[50], int b[50], int c[50],int x,int y,int z)
{
	int i = 0, j = 0, k = 0, t = 0, u = 0, v = 0;
	for (k = 0; k <= z; k++)
	{
		if (c[k] >= 0 && c[k] <= 9)
		{
			if (k <= x)
			{
				if (a[k] >= 0 && a[k] <= 9)
				{
					t = (t * 10) + a[k];
					
				}
				else
				{
					return 0;
				}
			}
			if (k <= y)
			{
				if (b[k] >= 0 && b[k] <= 9)
				{
					
					u = (u * 10) + b[k];
				}
				else
				{
					return 0;
				}
			}

			v = (v * 10) + c[k];

		}
		else
		{
			return 0;
		}

	}
	if (u <= 7)
	{
		if (u % 2 == 0 && t <= 30)
		{
			if ((v % 4 == 0 && v % 100 != 0) || v % 400 == 0)
			{
				if (u == 2 && t <= 29)
				{
					return 1;
				}
				else if (u == 2 && t > 29)
				{
					return 0;
				}


				return 1;

			}
			else
			{
				if (u == 2 && t <= 28)
				{
					return 1;
				}
				else if (u == 2 && t>28)
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}

		}
		else if (u % 2 == 1 && t <= 31)
		{
			return 1;
		}
	}
	else
	{
		if (u % 2 == 1 && t <= 30)
		{
			return 1;
		}
		else if (u % 2 == 0 && t <= 31)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}


}
int day(int a[50], int j)
{
	int t = 0, o;
	int i = 0, c = 0;
	for (i = 0; i <= j; i++)
	{
		t = (t * 10) + a[i];

	}
	for (i = 0; i <= j; i++)
	{
		if (t > 32)
		{
			printf(" invalid date");
			break;
		}

		if (c == 2 && a[i]>0||i==j&&c<2)
		{
			t = a[i];
			onces(t);
		}

		if (a[i] == 2 && c <= i && i != j || a[i] == 3 && c <= i && i != j)
		{
			t = a[i];
			tens(t);
			c = c + 2;
		}
		else if (a[i] == 1 && c <= i && i != j)
		{
			ten(t);
			c = c + 3;
		}
		else if (a[i] == 0 && c <= i)
		{
			c = c + 2;
		}

	}
}
int mon(int b[50],int j)
{
	int t = 0, o, i = 0;
	for (i = 0; i <= j; i++)
	{
		t = (t * 10) + b[i];
	}
	char a[] = { "err Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec" };
	if (t * 4 > 48)
	{
		printf("invalid Month");
	}
	else
	{
		for (i = t * 4; i < t * 4 + 3; i++)
		{
			if (a[i] != ' ')
			{
				printf("%c", a[i]);
			}
		}
	}
}
int year(int c[10], int l)
{
	int i, j, e = 0, t, o;
	j = l;

	for (i = 0; i <= l; i++)
	{
		if (c[i + 1] == 0 && c[i + 2] == 0||c[i]==1&&c[i+1]==0&&e==0)
		{
			if (j == 3&&e==0)
			{
				onces(c[i]);
				printf("Thousand ");
				j--;
				e++;
				
			}
			else if (j == 2 && e != 0)
			{
				onces(c[i]);
				printf("hundred ");
				e = 0;
			}
		}
		else if (i % 2 == 0)
		{
			if (c[i] == 1)
			{
				t = (c[i] * 10) + c[i + 1];
				ten(t);
				i++;
				e++;
				j--;
			}
			else if(c[i] > 1)
			{
				tens(c[i]);
				e++;
				j--;
			}
			else if (c[i]==0 && e!=0 && c[i-1]!=0)
			{
				printf("hundred");
				e++;
				j--;
			}
			
		}
		else
		{
			onces(c[i]);	
		}
		e++;
	}
}
int tens(int t)
{
	switch (t)
	{
	case 2:
		printf("Twenty ");
		break;
	case 3:
		printf("Thirty ");
		break;
	case 4:
		printf("Fourty ");
		break;
	case 5:
		printf("Fifty ");
		break;
	case 6:
		printf("Sixty ");
		break;
	case 7:
		printf("Seventy ");
		break;
	case 8:
		printf("eighty ");
		break;
	case 9:
		printf("Ninty ");
		break;
	default:
		break;
	}
}
int ten(int t)
{
	switch (t)
	{
	case 10:
		printf("Ten ");
		break;
	case 11:
		printf("Eleven ");
		break;
	case 12:
		printf("Twelve ");
		break;
	case 13:
		printf("Thirteen ");
		break;
	case 14:
		printf("Fourteen ");
		break;
	case 15:
		printf("Fifteen ");
		break;
	case 16:
		printf("Sixteen ");
		break;
	case 17:
		printf("Seventeen ");
		break;
	case 18:
		printf("Eighteen ");
		break;
	case 19:
		printf("Ninteen ");
		break;
	default:
		break;
	}
}
int onces(int t)
{
	switch (t)
	{
	case 1:
		printf("One ");
		break;
	case 2:
		printf("Two ");
		break;
	case 3:
		printf("Three ");
		break;
	case 4:
		printf("Four ");
		break;
	case 5:
		printf("Five ");
		break;
	case 6:
		printf("Six ");
		break;
	case 7:
		printf("Seven ");
		break;
	case 8:
		printf("Eight ");
		break;
	case 9:
		printf("Nine ");
		break;
	default:
		break;
	}
}