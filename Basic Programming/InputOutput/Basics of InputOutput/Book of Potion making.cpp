#include<iostream>
#include<cstring>
using namespace std;
int main()
{
  string input;
  int sum = 0;
  int t;
  cin>>input;
  if(input.size()!=10){
    cout<<"Illegal ISBN"<<endl;
    return 0;
  }
  else{
    for(size_t i=0; i<input.size(); i++){
    t = input.at(i)-48;
    sum = sum + t * (i+1);

    }
    if(sum%11==0)
    cout<<"Legal ISBN"<<endl;
    else
    cout<<"“Illegal ISBN"<<endl;

    return 0;
  }

}
