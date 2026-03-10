#include <stdio.h>

int main()
{
     int temp,i,j;
     int a[] = {5, 4, 3, 2, 1};
     for (i = 0; i < 4; i++)
          for (j = i + 1; j < 5; j++)
               temp = a[i];
               a[i] = a[j];
               a[j] = temp;
     for(i=0;i<5;i++)
     printf("%2d",a[i]);
}
