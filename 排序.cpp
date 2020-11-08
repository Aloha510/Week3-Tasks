#include<stdio.h>
#define MAX 100
void Cut(char a[], int k, int n)
{
	while (k < n) {
		a[k] = a[k + 1];
		k++;
	}
}
void Paixu(char a[], int n) 
{
	int i = 0;
	char num1,num2;
	while (--n)
		for (i = 0; i < n; i++)
		{
			num1 = (a[i] <= a[i + 1]) ? a[i] : a[i + 1];
			num2 = (a[i] >= a[i + 1]) ? a[i] : a[i + 1];
			a[i] = num1;
			a[i + 1] = num2;
		}
}
/*void Del(char a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if(a[i]==a[j])
		{
			for (int k = j; k < n+1 ; k++)
				a[k] = a[k + 1];
			n--;
			j--;
		}
}*/
void Print(char a[], int n)
{
	int i = 0;
	while (i < n)
	{
		printf("%d", a[i] - 48); 
		i++;
	}
}
int main(void)
{
	char x[MAX] = { 0 };
	int num = 0, i = 0;
	while (i < MAX)
	{
		scanf("%c", &x[i]);
		if (x[i++] == '\n') break;
		num++;
	}
	for (i = 0; i < num; i++)
	{
		if (x[i] < 48 || x[i] > 57)
		{
			Cut(x, i, num); 
			num--;
			i--;
		}
	}
	Paixu(x, num);
	//Del(x, num);
	Print(x, num);
}