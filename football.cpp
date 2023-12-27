#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c=1;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]==s[i+1]){
            c++;
        }
        else{
            if(c>=7){
                break;
            }
            else{
                c=1;
            }
        }
    }
    if(c>=7){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
