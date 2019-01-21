#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n,h1,m1,h2,m2,hf,mf;
    cin>>n;
    while(n--){
      cin>>h1>>m1>>h2>>m2;
      if(m2-m1<0){
        hf=h2-h1-1;
        mf=60+m2-m1;
      }
      else{
        hf=h2-h1;
        mf=m2-m1;
      }
      cout<<hf<<" "<<mf<<endl;
    }
return 0;
}
