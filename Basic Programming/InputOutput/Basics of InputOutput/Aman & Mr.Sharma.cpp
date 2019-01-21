#include<iostream>

using namespace std;
int main()
{
  long int d,r;
  int x;
  long toffee = 0;
  cin>>d;
  while(d--){
    cin>>r;
    cin>>x;
    if(100*x>=2*(22.0/7)*r)
     toffee++;


  }
cout<<toffee<<endl;
return 0;
}
