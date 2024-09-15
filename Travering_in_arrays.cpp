#include<iostream>
using namespace std;


void printArray (int arr[], int n)
{
    int i;

    // cout<<"Arrays"<<" ";

    for( i=0; i<n; i++ )
    {   
        cout<< arr[i]<<" ";
    }
}

int main()
{
 int arr[] = {1, 2, 3, 4, 5}; // Array initialization
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    printArray(arr, size);
}
