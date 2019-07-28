#include<iostream>
#include<vector>
#include<iterator>

using namespace std;

void swap (int *a, int *b)
 {
   int copy = *a;
   *a = *b ;
   *b = copy ;
 }

void bubbleSort (vector<int> &myVec )
 {
  cout<<" This vector contains " <<myVec.size()<<" Elements "<<endl;
  for (int i =0; i< myVec.size() ;i++ )
  {
    for (int j=0; j<myVec.size() -1; j++ )
   {
    if (myVec[j] >myVec[j+1] )
      swap( &myVec[j] , &myVec[j+1] );
    }
  }

 }

void printVector (vector<int> myVec)
 {
  for (int i=0; i< myVec.size() ; i++ )
  cout<< myVec[i] << " " ;
  cout<<endl;
 }

int main()
{

 cout<< " Enter the numbers to sort ( -1 to EoF)\n ";
 vector<int> myVec;
 int  num =0;
 while(num != -1 )
 {
 cin>> num ;
 if(num != -1)
 myVec.push_back(num);
 }
cout<<endl;
bubbleSort (myVec);
cout<<endl;
cout<< " Sorted vector is as \n " ;
printVector (myVec) ;

return 0;

}
