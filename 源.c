#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, n;
    scanf("%d %d %d", &a, &b, &n);
    int  result;
    result = 1.0*a/b * pow(10, n)-a/b*pow(10,n);
    printf("%d", result);
    return 0;
}