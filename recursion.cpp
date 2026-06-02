#include<iostream>
using namespace std;


// int cnt=1;
// void print(int n){
//     if(cnt==(n+1)) return;
//     cout<<"tripti"<<endl;
//     cnt++;  
//     print(n);

// }

// int main(){
//     int n;
//     cout<<"enter value of n"<<endl;
//     cin>>n;
//  print(n);


//  return 0;
// }

// ============================================================================

// Print lineraly from 1 to n 

// void f(int i,int n)
// {
//     if(i>n) return;

//     cout<<i<<endl;
//     f(i+1, n);
    
// }

// int main()
// {
//     int n;
//     cout<<"enter n"<<endl;
//     cin>>n;
//     f(1,n);

//     return 0 ;
// }


// print in reverse order n to 1

// void f(int n){
//     if(n==0) return;
//     cout<<n<<endl;
//     n--;
//     f(n);


// }


// int main()
// {
//     int n;
//     cout<<"enter the n :" <<endl;
//     cin>>n;
//     f(n);
//     return 0;
// }

// method backtracking for printing reverse n to 1 in recursion


// void f(int i , int n){
//     if(i>n) return;
//     f(i+1,n);
//     cout<<i<<endl;
// }
// int main()
// {

//     f(1,5);
//     return 0;
// }

// sum of 1 to n using recursion

// int f(int n)
// {
//   if(n==0) return 0;
//   return n+f(n-1);

// }

// int main(){
//   cout<<"the sum is : "<<f(10)<<endl;

//   return 0;
// }

// factorial of n number

// int fact(int n){
//   if(n==0) return 1;
//   return n*fact(n-1);
// }
// int main(){
//   cout<<fact(10);
//   return 0;
// }

void change(int arr[],int n, int i)
{

  if(i>=n/2) return ;

  swap(arr[i] ,arr[n-i-1]);
  change(arr,n,i+1);



  return;
}
int main(){

  int arr[10]={1,2,3,4,5,6,7,8,9,10};

  change(arr,10,0);

  cout<<"the swaped array is "<<endl;

  for(int i=0;i<10;i++){
    cout<<arr[i]<<" ";
  }



  return 0;
}