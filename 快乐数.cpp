#include<stdio.h>
#include<math.h>
int happy(int n)
{
	int sum=0;
	while (n)
	{
		sum += pow(n % 10, 2);
		n /= 10;
	}
	return sum;
}
int main()
{
	int n;
	scanf("%d", &n);
	do {
		n = happy(n);
		if (n == 4 || n == 16 || n == 37||n==58||n==89||n==145||n==42||n==20) {
			printf("false");
			return 0;
		}
	} while (n != 1);
	printf("ture");
	return 0;
}