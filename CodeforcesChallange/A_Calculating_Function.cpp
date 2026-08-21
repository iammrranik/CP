#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long odd, even, sum_odd, sum_even;
    if(n%2==0){
        odd=n/2, even=n/2;
    }else{
        odd=(n/2)+1, even=n/2;
    }
    int a=-1, d=-2;
    sum_odd=odd*(2*a+d*(odd-1))/2;
    // cout<<sum_odd<<"\n";
    a=2, d=2;
    sum_even=even*(2*a+d*(even-1))/2;
    // cout<<sum_even<<"\n";
    cout<<sum_odd+sum_even;
    return 0;
}