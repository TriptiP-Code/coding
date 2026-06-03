#include<iostream>
#include<bits/stdc++.h>
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

// void change(int arr[],int n, int i)
// {

//   if(i>=n/2) return ;

//   swap(arr[i] ,arr[n-i-1]);
//   change(arr,n,i+1);



//   return;
// }
// int main(){

//   int arr[10]={1,2,3,4,5,6,7,8,9,10};

//   change(arr,10,0);

//   cout<<"the swaped array is "<<endl;

//   for(int i=0;i<10;i++){
//     cout<<arr[i]<<" ";
//   }



//   return 0;
// }

// checking whether a string is palindrom or not using the recusrsion logic

// bool palin(string s,int i){

//   if(i>= s.size()/2) return true;

//   if(s[i]!=s[s.size() -i -1]) return false;

//   return palin(s,i+1);

// }

// int main(){

//   string s="Tripti";
//   if (palin(s,0) ==1) cout<<"string is palin";
//   else cout<<"string not palin";
//   return 0;
// }

// Fibonaci series without recursion

// int main(){

//   int i=0 , j=1, sum=0,n;

//   cout<<"enter the number"<<endl;
//   cin>>n;
//   cout<<i<<" "<<j<<" ";

//   for (int k=3; k<=n;k++){

//     sum=i+j;
//     cout<<sum<<" ";
//     i=j;
//     j=sum;

//   }

//   return 0;
// }

// fibonaci series with recursion(multiple recursion)
int f(int n){

  if(n<=1) return n;

  int last =f(n-1);
  int slast=f(n-2);
  return last+slast;
}

int main(){

  cout<<f(10);

  return 0;
}