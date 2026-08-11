#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, cnt=0;
    cin>>t;
    for(int i=0; i<t; i++){
        int x, sum=0;
        for(int j=0; j<3; j++){
            cin>>x;
            sum+=x;
        }
        if(sum>=2){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}