#include<iostream>
using namespace std;


int main()
{
    int l,n,w,h;
    cin>>l;
    cin>>n;
    while(n--){
      cin>>w>>h;
      if(w>=l && h>=l && w!=h){
      cout<<"CROP IT"<<endl;
    }
      else if(h==l && w==l){
      cout<<"ACCEPTED"<<endl;
    }
      else if(w==h && w>l && h>l){
      cout<<"ACCEPTED"<<endl;
    }
      else{
      cout<<"UPLOAD ANOTHER"<<endl;
    }

    }
}
