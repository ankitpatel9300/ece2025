#include<iostream>
using std::cout;
using std::endl;

void swap(int *arr ,int n,int m)
{
	int store=arr[n];
	arr[n]=arr[m];
	arr[m]=store;
}

void print_out(int *arr,int N)
{
	for (int i=0;i!=N;++i)
	{
		cout<<arr[i]<<" ";
	}
}

int main()
{
	int a[]={10,15,31,6,2,7,1,5};
	int N=8;  //manually counted value in array a[]


	//show original content
	cout<<"The original array is:"<<endl;
	print_out(a,N);
	cout<<endl;
	bool swaps=1;
	while(swaps)
	{
		swaps=0;
		for (int j=0;j!=(N-1);++j)
		{
			if (a[j]>a[j+1])
			{
				swap(a,j,j+1);
				swaps=1;
			}
		}
	}

cout<< "Updated array is :"<<endl;
print_out(a,N);

}
