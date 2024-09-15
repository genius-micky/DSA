// Printing array in a reverse order using extra space


#include <iostream>
using namespace std;
int main()
{
 int arr[5] = {1,2,3,4,5};
 int b[5];

 int j = 0;

 for(int i=4;i>=0;i--)
 {
    b[j] = arr[i];
    j += 1;
 }

 for(int i=0;i<5;i++)
 {
    cout<<b[i]<<" ";
 }
 
 return 0;
} 