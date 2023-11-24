#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10][10],r,c;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(a[i][j]==1){
                r=abs(i-2);
                c=abs(j-2);
            }
        }
    }
    cout<<r+c<<endl;
}
