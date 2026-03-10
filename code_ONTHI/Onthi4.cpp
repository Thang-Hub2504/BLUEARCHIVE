#include<stdio.h>
int main()
{
    int s=1,n;

    printf("Nhap n: ");
    scanf("%d", &n);


    for(int i=1; i<=n; i++)
        {
        s=s*i;
        printf("\ni: %d",i );
        }

    printf("\nTich la: %d", s);
    return 0;
}