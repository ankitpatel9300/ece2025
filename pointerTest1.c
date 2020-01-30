/*
 * pointerTest1.c
 *
 *  Created on: Jan. 23, 2020
 *      Author: ankit
 */

#include<stdio.h>
#include<stdlib.h>

int fAdd(int *a , int *b)
{
	int x,y;
	x=*a;
	y=*b;
	int sum =0;
	sum= x+y;

	return sum;
}

int main()
{
	int a=3,b=2;
	printf("Sum is %d", fAdd(&a,&b));
	return 0;

}
