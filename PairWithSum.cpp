#include <iostream>
using namespace std;
int main()
{
 int arr[5] = {1,4,2,3,6};
 int value = 5;

 int count = 0;

 for(int i = 0; i<5; i++)
 {
    for(int j = i+1; j<5; j++)
    
        if(arr[i]+arr[j]==value)
        {
            count +=1;

        }
    
 }
 cout<<"The Number of pairs are : "<<count<<endl;
 return 0;
} 