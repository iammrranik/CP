#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, cnt=0;
    cin>>t;
    for(int i=0; i<t; i++){
        string s;
        cin>>s;
        if(s=="++X" || s=="X++"){
            cnt++;
        }else if(s=="--X" || s=="X--"){
            cnt--;
        }
    }
    cout<<cnt;
    return 0;
}