#include<stdio.h>

int main()
{
    int testvar=1;
    while(testvar>=1)
    {
        printf("%d ",testvar);
        testvar-=1;
    }
    printf("after loop testvar =%d",testvar);
    printf("\n");
    return 0;
}


