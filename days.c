#include <stdio.h>

int main()
{
    int a[6];

    for(int i=0 ; i<5 ; i++)
    {
     scanf("%d\n", &a[i]);
     printf("%d\n",a[i]);
    }

    if(a[1]==a[4] && a[2]==a[5])
    {
    if(a[0]%4==0 && a[0]%100!=0)
   {
     printf("366\n");
   }
    else
   {
     if(a[0]%400==0)
     {
       printf("366\n");
     }
     printf("365\n");
   }
 }
    return 0;
}
