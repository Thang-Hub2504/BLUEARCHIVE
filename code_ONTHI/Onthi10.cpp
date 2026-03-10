#include <stdio.h>

int Function1(int a,int b)
   {  int d=a*b;
        while(a!=b)
          {
                if(a>b)
                    a=a-b;
               else
                   b=b-a;
           }
     return(b/a);
}

int main()
{    int a=12,b=8;
     printf("a=%d", Function1(a,b));
return 0;
}