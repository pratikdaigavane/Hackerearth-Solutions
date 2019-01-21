#include<iostream>

using namespace std;
int main()
{
  string code;
  int num;
  cin>>code;
  cin>>num;
  for(size_t i = 0; i<code.size(); i++){
    if((code.at(i)<=57) && (code.at(i)>=48)){
      code.at(i)=code.at(i)+num;
      if(code.at(i)>57)
      code.at(i)=code.at(i)-10;
    }
    if((code.at(i)<=90) && (code.at(i)>=65)){
      code.at(i)=code.at(i)+num;
      if(code.at(i)>90)
      code.at(i)=code.at(i)-26;
    }
    if((code.at(i)<=122) && (code.at(i)>=97)){
      code.at(i)=code.at(i)+num;
      if(code.at(i)>122)
      code.at(i)=code.at(i)-26;
    }

  }

  cout<<code<<endl;
  return 0;




}
