#include<stdio.h>
int main()
{
    char A[50];
    scanf("%f",&A);
    double B,C,D;
    gets(A);
    scanf("%lf %lf",&B,&C);
    D=B+((C/100)*15);
    printf("TOTAL = R$ %0.2lf\n",D);

    return 0;
}
