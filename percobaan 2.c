#include <stdio.h>
int minimum (int x, int y)
{
    if(x>y) // maksimum (x>y)
        return(x);
    else
        return(y);
}
int main()
{
    int a,b,hasil;
    printf("masukkan 2 bil=\n");
    scanf("%d%d",&a,&b);
    hasil=minimum (a,b);
    printf("nilai terkecil=%d\n",hasil);
}
