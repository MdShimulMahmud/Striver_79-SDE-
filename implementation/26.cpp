#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    string s; cin>>s;
    int pos = 1, i=0;
    string res="";

    while(i<n){
        res+=s[i];
        i+=pos;
        pos++;
    }
    cout<<res<<endl;

    return 0;
}