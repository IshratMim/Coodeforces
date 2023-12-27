#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100][100],count=0;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
                cin>>a[i][j];

        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                if(a[i][0]==a[j][1]){
                    count++;
                }

        }
    }
    cout<<count;
}
