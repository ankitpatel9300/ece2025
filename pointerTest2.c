/*
 * pointerTest2.c
 *
 *  Created on: Jan. 23, 2020
 *      Author: ankit
 */


#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i=3,j=-7;
	int *pi;
	int *pj;

	pi= &i ;
	pj= &j;
	//use malloc()!
	printf("Address of i is %d \t" , &i);
	printf("values are %d %d\n" , pi,*pi);

	pi= malloc(sizeof(i));
	pj=malloc(sizeof(j));

	*pi= 3;
	*pj=-7;


	printf("values are %d %d" , pi,*pi);

	}
