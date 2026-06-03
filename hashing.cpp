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


