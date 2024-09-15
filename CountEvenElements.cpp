#include <iostream>
using namespace std;
int main()
{
 int arr[5] = {2,34, 5,67,8,};

 int count = 0;

 for(int i = 0; i<5; i++)
 {
    if(arr[i]%2==0){
        count +=1;
    }

 }

 cout<<"Number of even elements are : "<<count<<endl;
 
 return 0;
} 