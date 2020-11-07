#include<stdio.h>
int main()
{
    int n=2, sum = 1, month, a = 1, b = 1;
    scanf("%d", &month);
    if (month == 1)
        printf("1");
    else if (month == 2)
        printf("1");
    else {
        while (n < month)
        {
            n++;
            a = b;
            b = sum;
            sum += a;
        }
        printf("%d", sum);
    }
    return 0;
}