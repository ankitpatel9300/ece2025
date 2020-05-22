/*
 * pointerTest1.c
 *
 *  Created on: Jan. 23, 2020
 *      Author: ankit
 */

#include<stdio.h>
#include<stdlib.h>

int fAdd(int *a ,int *b) ;    //Function prototype

int main()
{
	int a=3,b=2;
	printf("Sum is %d", fAdd(&a,&b));
	return 0;

}
	 
int fAdd(int *a , int *b)
{
	int x,y;   //variable declaration
	x=*a;
	y=*b;
	int sum =0;
	sum= x+y;

	return sum;    //return the result to calling function
}
