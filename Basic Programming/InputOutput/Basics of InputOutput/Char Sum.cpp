#include<iostream>

using namespace std;
int main()
{
  string input;
  int t;
  int sum=0;
  cin>>input;
  for(size_t i = 0; i<input.size(); i++){
    t = input.at(i)-96;
    sum = sum + t;
  }
  cout<<sum<<endl;
  return 0;

}
