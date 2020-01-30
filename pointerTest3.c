/*
 * pointerTest3.c
 *
 *  Created on: Jan. 23, 2020
 *      Author: ankit
 */


#include<stdio.h>
#include<stdlib.h>


int fsum(int *arr, size_t N)
{
  int sum=0;
  for (int i=0;i<N ; i++)
  {
	  sum=sum+ *(arr+i);

  }
  return sum ;
}
int main()
{
	int data_arr[]={23,-7,62,58,97,109,33000,-265385};
	size_t L=sizeof(data_arr)/sizeof(int);
	printf("sum of element in array is %d:\n",fsum(data_arr,L));
	return 0;
}
