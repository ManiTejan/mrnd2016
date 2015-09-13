#include<stdio.h>
#include<conio.h>
void main()
{
	char s[50];
	printf("FORMATE \n\t DD-MM-YYYY:\n\t");
	gets(s);
	if (s[2] == '-'&& s[5] == '-')
	{
		date(s);
	}
	else
	{
		printf("Enter date in correct formate");
	}
	scanf(" ");
}
int date(char d[50])
{
	int i, j = 0, count = 0, k = 0, l = 0;
	int a[10];
	int b[10];
	int c[10];
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
	if (valid(a, b, c))
	{
		day(a, j - 1);
		printf(" - ");
		mon(b);
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
int valid(int a[2], int b[2], int c[4])
{
	int i = 0, j = 0, k = 0, t = 0, u = 0, v = 0;
	for (k = 0; k < 4; k++)
	{
		if (c[k] >= 0 && c[k] <= 9)
		{
			if (k < 2)
			{
				if (a[k] >= 0 && a[k] <= 9 && b[k] >= 0 && b[k] <= 9)
				{
					t = (t * 10) + a[k];
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
int day(int a[10], int j)
{
	int t, o;
	int i = 0, c = 0;
	t = a[i];
	o = a[i + 1];
	t = (t * 10) + o;
	for (i = 0; i <= j; i++)
	{
		if (t > 32)
		{
			printf(" invalid date");
			break;
		}

		if (c == 2 && a[i]>0)
		{
			t = a[i];
			onces(t);
		}

		if (a[i] == 2 && c <= i || a[i] == 3 && c <= i)
		{
			t = a[i];
			tens(t);
			c = c + 2;
		}
		else if (a[i] == 1 && c <= i)
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
int mon(int b[10])
{
	int t, o, i = 0;
	t = b[i];
	o = b[i + 1];
	t = (t * 10) + o;
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
	//printf("\n %d",t);

}
int year(int c[10], int l)
{
	int i, j, e = 0, t, o;
	j = l;

	for (i = 0; i <= l; i++)
	{
		if (j == 3)
		{
			if (c[i] != 0)
			{
				onces(c[i]);
				printf("Thousand ");
			}

			j--;
			i++;
		}
		if (j == 2)
		{
			if (c[i] != 0)
			{
				onces(c[i]);
				printf("Hundred and ");
			}
			else if (c[i + 2] != 0)
			{
				printf("and ");
			}
			j--;
			i++;
		}
		if (j == 1)
		{

			if (c[i] >= 2 && e <= i)
			{
				tens(c[i]);
				e = e + 2;
				j--;
				i++;
			}
			else if (c[i] == 1 && e <= i)
			{
				t = c[i];
				o = c[i + 1];
				t = (t * 10) + o;

				ten(t);
				e = e + 3;
				j = j - 2;
				i = i + 2;

			}
			else if (c[i] == 0 && e <= i)
			{
				e = e + 2;
				j--;
				i++;
			}
		}
		if (j == 0)
		{
			onces(c[i]);
			j--;
			i++;
		}
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