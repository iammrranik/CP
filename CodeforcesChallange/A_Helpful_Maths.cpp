#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    vector<int> a;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        if(s[i]>=48 && s[i]<=57){
            a.push_back(s[i]-48);
        }
    }
    sort(a.begin(), a.end());
    for(int i=0; i<a.size(); i++){
        if(i==a.size()-1){
            cout<<a[i];
        }else{
            cout<<a[i]<<"+";
        }
    }
    return 0;
}