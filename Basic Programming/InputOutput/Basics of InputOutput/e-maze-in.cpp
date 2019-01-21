#include<iostream>
using namespace std;


int main()
{
    string str;
    int x=0;int y= 0;
    cin>>str;

    int ln = str.length();


    for (int i=0; i<ln; i++)
    {
      if(str[i]=='L')
        x=x-1;
      else if(str[i]=='R')
        x=x+1;
      else if(str[i]=='U')
        y=y+1;
      else if(str[i]=='D')
        y=y-1;
    }

    cout << x<<" "<<y<<endl;
    return 0;
}
