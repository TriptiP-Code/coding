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

void f(int i,int n)
{
    if(i>n) return;

    cout<<i<<endl;
    f(i+1, n);
    
}

int main()
{
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    f(1,n);

    return 0 ;
}



