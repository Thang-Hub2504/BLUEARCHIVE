#include<stdio.h>

int main()
{
    int x=2,y=3;
    int kq=1;

    for(int i=1; i<=y; i++)
    {
        kq*=x;
        printf("%d ",x);
    }
    printf("%d",kq);
}