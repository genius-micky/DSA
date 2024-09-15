#include <iostream>
#include<climits>
using namespace std;
int main()
{
 
int a[5] = {1,4,5,63,4};
int ans = INT_MIN;
int size = sizeof(a)/sizeof(a[0]);
cout<<size<<endl;
 

 for(int i = 0;i < size; i++)
 {
   if(ans<a[i])
   ans=a[i];
 }
 cout<<ans<<endl;
   
 return 0;
} 