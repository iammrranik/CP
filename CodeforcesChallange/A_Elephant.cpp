#include<bits/stdc++.h>
using namespace std;
int main(){
    int x, cnt=0;
    cin>>x;
    for(int i=5, tmp; i>=1; i--){
        tmp=x/i;
        cnt+=tmp;
        x-=tmp*i;
    }
    cout<<cnt;
    return 0;
}