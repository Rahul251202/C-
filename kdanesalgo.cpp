#include<iostream>
using namespace std;

int main()
{
 int arr[]={-2,-3,4,-1,-2,1,5,-3};
 int n=sizeof(arr)/sizeof(arr[0]);

  for(int i=0; i<n; i++)
    cin>>arr[i];
    

  int max_sum = 0, curr_sum =0;

  for(int i=0; i<n; i++){

   curr_sum += a
   if(max_sum < curr_sum)
     max_sum = curr_sum;

   if(curr_sum < 0)
     curr_sum = 0;


  }

  cout<<max_sum;
  return 0;
}
