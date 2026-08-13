#include<bits/stdc++.h>
using namespace std;
int main(){
    string a, b;
    cin>>a>>b;
    bool flag=true;
    if(a.length()!=b.length()){
        flag=false;
    }
    for(int i=0, j=b.length()-1; i<a.length(); i++, j--){
        if(a[i]!=b[j]){
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}