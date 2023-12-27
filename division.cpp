#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        if(a>=1900){
            cout<<"Division 1"<<endl;
        }
        if(a<=1899 && a>=1600){
            cout<<"Division 2"<<endl;
        }
        if(a<=1599 && a>=1400){
            cout<<"Division 3"<<endl;
        }
        if(a<=1399){
            cout<<"Division 4"<<endl;
        }
    }
}
