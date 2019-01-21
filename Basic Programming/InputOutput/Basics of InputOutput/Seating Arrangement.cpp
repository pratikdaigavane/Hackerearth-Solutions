#include<iostream>
using namespace std;
int main(){
    long int tc;
    int n;
    int opp;
    int window;
    cin>>tc;

    while(tc--){
        cin >> n;

        opp=n+(2*(6-((n%12)-1))-1);
        window=abs((2*(6-((n%12)-1))-1));
        if(n%12==0){
            opp=opp-24;
            window=window-2;
        }
        if(window==11||window==1)
            cout<<opp<<" "<<"WS"<<endl;
        if(window==3||window==9)
            cout<<opp<<" "<<"MS"<<endl;
        if(window==7||window==5)
            cout<<opp<<" "<<"AS"<<endl;


    }

}
