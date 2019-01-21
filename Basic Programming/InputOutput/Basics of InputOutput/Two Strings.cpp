#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
using namespace std;


string sortString(string &str)
{
   sort(str.begin(), str.end());
   return str;
}



// Driver program to test above function
int main()
{
    string first;
    string second;
    int comp,tc;
    int fact=0;
    cin>>tc;
    while(tc--){

    cin>>first;
    cin>>second;
    first=sortString(first);
    second=sortString(second);




      if(first==second)
      cout<<"YES"<<endl;
      else cout<<"NO"<<endl;


}

    return 0;
}
