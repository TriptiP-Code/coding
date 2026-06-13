#include<bits/stdc++.h>
using namespace std;

int main(){

// vector<int> v={10,20,30};
// for(int i : v){
//   cout<<i<<" ";
// }

// cout<<"  initial array "<<endl;

// v.push_back(40); 

// for(int i : v){
//   cout<<i<<" ";
// }

// cout<<" first new array"<<endl;

// v.insert(v.begin()+1,50);


// for(int i : v){
//   cout<<i<<" ";
// }

// cout<<" second new array"<<endl;

vector<int> v={11,22,33};

for(int i=0; i<v.size();i++)
{
  cout<<v[i]<<" ";
}
cout<<" using for loop"<<endl;
for(int j :v){ cout<<j<<" ";}
cout<<" using range based loop"<<endl;

for(auto it=v.begin(); it !=v.end(); it++)
{
  cout<<*it<<" ";
}
cout<<" using iterator"<<endl;

return 0;
}