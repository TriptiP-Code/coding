#include<bits/stdc++.h>
using namespace std;

// int main()
// {
//   // array as input
//   int n;
//   cout<<"enter the array size : "<<endl;
//   cin >>n;
//   int arr[n];
//   cout<<"enter the "<<n<<" "<<" array elements :"<<endl;
//   for(int i =0;i<n;i++){ cin>> arr[i]; }


//   // precompute

//   int hash[13]={0};
//   for(int i=0;i<n;i++)
//   {
//     hash[arr[i]] +=1;
//   }

//   int q; 
//   cout<<" enter the number of queries you have "<<endl; 
//   cin>>q;
//   while(q--)
//   {
//     int number;
//     cout<<"enter the number of the array to which you want to see how many times occured : "<<endl;
//     cin>>number;

//     cout<<"the number of times"<< number <<" "<<"appeared is" <<hash[number] <<endl;
//   }
//   return 0;
// }

// character hashing

// int main()
// {

//   string s;
//   cout<<"enter the string"<<endl;
//   cin>>s;

//   int hash[256]={0};
//   for(int i =0;i<s.size();i++)
//   {
//     hash[s[i]]++;

//   }

//   int q;
//   cout<<"enter the number of queries you have :"<<endl;
//   cin>>q;
//   while(q--)
//   {
//     char c;
//     cout<<"enter the character to check the number of occurance :"<<endl;
//     cin>>c;
//     cout<<"the number of time "<<c<<" appears is :"<<hash[c]<<endl;
//   }



//   return 0;
// }

// character hashing for lowercase alphabets only , it will give wrong output if you put any other character than lowercase aplhabets

// int main()
// {

//   string s;
//   cout<<"enter the string"<<endl;
//   cin>>s;

//   int hash[26]={0};
//   for(int i =0;i<s.size();i++)
//   {
//     hash[s[i]-'a']++;

//   }

//   int q;
//   cout<<"enter the number of queries you have :"<<endl;
//   cin>>q;
//   while(q--)
//   {
//     char c;
//     cout<<"enter the character to check the number of occurance :"<<endl;
//     cin>>c;
//     cout<<"the number of time "<<c<<" appears is :"<<hash[c-'a']<<endl;
//   }



//   return 0;
// }

// hashing with the help of map

// int main(){

//   int n;
//   cout<<"enter the number of elements in the array"<<endl;
//   cin>>n;
//   int arr[n];
//   map<int , int>mpp;
//   cout<<"enter the array elements one by one"<<endl;
//   for (int i =0;i<n;i++){
//     cin>>arr[i];
//     mpp[arr[i]]++;
//   }

//   for(auto it : mpp){
//     cout<<it.first <<" -->"<<it.second<<endl;
//   }

//   int q;
//   cout<<"enter the number of queries you have"<<endl;
//   cin>>q;
//   while(q--)
//   {
//     int number;
//     cout<<"enter the number whose occurance you want to know"<<endl;
//     cin>>number;
//     cout<<mpp[number]<<endl;
//   }
  
//   return 0;
// }

// Character hashing with map

// int main()
// {
//   string s;
//   cout<<"enter the string"<<endl;
//   cin>>s;
//   // cout<<"your entered string is :"<<s<<endl;
//   // cout<<"the size of string is :"<<s.size()<<endl;
//   // for(int j=0;j<s.size();j++){
//   //   cout<<"["<<j<<"]"<<"  is :"<<s[j]<<endl;
//   // }

//   map<char,int>mpp;

//   for(int i=0;i<s.size();i++)
//   {
//     mpp[s[i]]++;
//   }
//   cout<<"here comes the character and its frequency in the string"<<endl;
//   for(auto it : mpp){
//     cout<<it.first<<"-->"<<it.second<<endl;
//   }
//   return 0;
// }

// Calculating the highest frequency of element in the array

int main()
{
  int arr[10]={1,2,2,2,4,5,6,7,7,7};

  map<int , int>mpp;
  for(int i=0;i<10;i++)
  {
    mpp[arr[i]]++;
  }
  int highfrequency=0;

  for(auto it : mpp){
    if(it.second > highfrequency){
      highfrequency=it.second;
    }

  }

  cout<<"highest frequency is : "<<highfrequency;
  cout<<"  and the elements having highest frequency are : ";

  for(auto it : mpp)
  {
    if(it.second==highfrequency)
    {
      cout<<it.first<<" ";
    }
  }
  
  return 0;
}