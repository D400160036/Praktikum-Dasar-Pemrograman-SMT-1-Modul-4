#include<stdio.h>
float cm2m (float cm);
int main ()
{
    float tcm,tm;
    printf("tinggi badan (cm) : ");
    scanf("%f",&tcm);
    tm=cm2m (tcm);
    printf("tinggi badan dalam m=%.2f",tm);
}
float cm2m (float cm)
{
    float m;
    m=0.01*cm;
    return m;
}
