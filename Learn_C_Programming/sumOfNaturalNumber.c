#include<stdio.h>

int main()

{

int n=0,
total=0;
printf("Enter number : ");
scanf("%d", &n);
total= (n*(n+1))/2;
printf(" Total from 0 to %d is %d\n",n,total);


return 0;

}

