#include<bits/stdc++.h>
using namespace std;
int main(){
    string a, b;
    int flag=0;
    cin>>a>>b;
    for(int i=0; i<a.length(); i++){
        if(a[i]>=97){
            a[i]-=32;
        }
        if(b[i]>=97){
            b[i]-=32;
        }
        if(a[i]==b[i]){
            continue;
        }else if(a[i]<b[i]){
            flag=-1;
            break;
        }else{
            flag=1;
            break;
        }
    }
    cout<<flag;
    return 0;
}