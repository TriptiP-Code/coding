#include<bits/stdc++.h>
using namespace std;

int main()
{
  int arr[15]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
  int target=16;
  int low=0, high=14;bool found;
  while(low<=high)
  {
    int mid=(low+high)/2;
    if(arr[mid]==target)
    {
      cout<<"the target is at index "<<mid;
      found=true;
      break;

    }
    else if(target > arr[mid]) low=mid+1;
    else high=mid-1;
  }
  if(!found){
    cout<<"target not found ";

  }


  return 0;
}

// int search(vector<int>& nums, int target)
// {
//   int n =nums.size();
//   int low=0, high=n-1;
//   while(low <= high){
//     int mid=(low + high)/2;
//     if(nums[mid]== target) return mid;
//     else if(target >  nums[mid]) low=mid+1;
//     else high =mid-1;
//   }
//   return -1;
// }