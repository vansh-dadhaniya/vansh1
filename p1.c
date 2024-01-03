#include<stdio.h>
void main()
{
 int i,j,a;
 for(i=0;i<5;i++)
 {
    a=65;
    for(j=0;j<=i;j++)
    {
        printf("%c ",a);
        a++;
    }
      printf("\n");
 }

}