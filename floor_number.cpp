#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        a-=2;

        if(a<=b){

            if(a<=0){
                cout<<"1"<<endl;
            }
            else
                cout<<"2"<<endl;
        }
        else if(a>b){
                if(a%b==0){
                    cout<<a/b+1<<endl;
                }
                else
                    cout<<a/b+2<<endl;


        }
    }
    return 0;
}
