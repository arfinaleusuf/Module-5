#include<stdio.h>
int main()
{
    long long int A ,B ,C , D;
    long long int E, F;
    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);
    E = A * B;
    F = C * D;
    printf("Difference = %lld",E-F);
    return 0;
}