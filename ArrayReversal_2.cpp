#include <iostream>
using namespace std;
int main()
{
 int arr[5] = {8,9,4,5,6};

//  cout<<n<<endl;
 int l = 0;
 int r = 4;

while(l<r)
{
    int temp = arr[r];
    arr[r]=arr[l];
    arr[l]=temp;
    l++;
    r--;
} 

for(int i=0;i<5;i++)
{
    cout<<arr[i]<<" ";
    
}
 return 0;
} 