#include<stdio.h>
int sum(int n)
{
    if (n == 1 || n == 2)
        return 1;
    else return sum(n - 1) + sum(n - 2);
}
int main()
{
    int month;
    scanf("%d", &month);
    printf("%d", sum(month));
    return 0;
}
