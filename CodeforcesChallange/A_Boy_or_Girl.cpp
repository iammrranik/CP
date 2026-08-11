#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int a[26]={0}, cnt=0;
    for(int i=0; i<s.length(); i++){
        a[s[i]-97]++;
    }
    for(int i=0; i<26; i++){
        if(a[i]>0){
            cnt++;
        }
    }
    if(cnt%2==0){
        cout<<"CHAT WITH HER!";
    }else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}