/*
 * bubblesort_vector.cpp
 *
 *  Created on: Jul. 2, 2019
 *      Author: ankit
 */


#include <iostream>
#include <vector>

//function to swap values
//need to pass by reference to sort the original values and not just these copies
void swap (int *a, int *b)
{
    int copy = *a;
    *a = *b;
    *b = copy;
}

void bubbleSort (std::vector<int> &arr)
{
    std::cout<<"This array contains: "<<arr.size()<<" Elements "<<std::endl;

    //comparisons will be done n times
    for (int i = 0; i < arr.size(); i++)
    {
        //compare elemet to the next element, and swap if condition is true
        for(int j = 0; j < arr.size() - 1; j++)
        {
            if (arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
        }
    }
}

//function to print the array
void printArray (std::vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
        std::cout<<arr[i]<<" ";
    std::cout<<std::endl;
}

int main()
{
    std::cout<<"Enter the array to be sort (-1 to end)\n";

    std::vector<int> arr;
    int num = 0;
    while (num != -1)
    {
        std::cin>>num;
        if (num != -1)
            //add elements to the vector container
            arr.push_back(num);
    }

    //sort the array
    bubbleSort(arr);

    std::cout<<"Sorted array is as\n";
    printArray(arr);

    return 0;
}

