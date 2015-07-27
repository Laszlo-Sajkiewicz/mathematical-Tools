#include <stdio.h>
#include <stdlib.h>

int main()
{
int n;// the number
int i;//for the loop
int res;//result
printf("\n Enter a number");
scanf("%d",&n);
for (i=0,i<10,i++)
{
res = i*n;
printf(" i*n=%d",res);
}
}
