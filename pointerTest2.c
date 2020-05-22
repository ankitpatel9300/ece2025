/*  pointerTest2.c  *
 *  Created on: Jan. 23, 2020
 *  Author: ankit
 */


#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i=3,j=-7;
	int *pi;
	int *pj;

	pi= &i ; //initialize pointer pi with address of i
	pj= &j;  //initialize pointer pj with address of j
	//See actual memory address alocation
	printf("Address of i is %d \t" , &i);
	printf("values are %d %d\n" , pi,*pi);
        
	//use malloc()! and the see address allocation
	pi= malloc(sizeof(i));  //point pi to some memory location of 4-byte ( sizeof(int) )
	pj=malloc(sizeof(j));
	*pi= 3;  //initialize new address with value
	*pj=-7;
	printf("values are %d %d" , pi,*pi);  // see if new address alos have same value

	}
