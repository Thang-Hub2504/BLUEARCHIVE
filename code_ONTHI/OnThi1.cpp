#include<stdio.h>
int main()
{
    int s=0,n;

    printf("Nhap n: ");
    scanf("%d", &n);


    for(int i=1; i<=n; i++)
        {
        s=s+i;     
        }

    printf("\nTong la: %d", s);
    return 0;
}