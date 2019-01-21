#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int l,r,k,count=0;
    cin>>l>>r>>k;
    for(l;l<=r;l++){
        if(l%k==0){
              count++;
          }
    }
    cout<<count<<endl;
return 0;
}
