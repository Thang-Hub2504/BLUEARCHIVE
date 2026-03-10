#include<stdio.h>
#include<math.h>
int main()
{
    int s=0,n;

    printf("Nhap n: ");
    scanf("%d", &n);


    for(int i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
        s=s+i;     
        }
    }
    printf("\nTong la: %d", s);
    return 0;
}