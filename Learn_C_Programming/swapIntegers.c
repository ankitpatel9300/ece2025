
// passign argumants

#include <stdio.h>


void swap( int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

int main()
{
    int a=10,b=20;
    printf("   Initial integers are   and addresses are\n ");
    printf("   a=%d     b=%d       " , a,b);
    printf(" a=%d, b=%d \n" , &a,&b);

    swap(&a,&b);

    printf("   Integers after swap and addresses are\n ");
    printf("   a=%d     b=%d       " , a,b);
    printf(" a=%d, b=%d \n" , &a,&b);

      return 0;
}
