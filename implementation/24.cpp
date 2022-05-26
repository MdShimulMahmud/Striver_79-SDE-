#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int d = n%10;
        int ans=(d-1)*10, num=d,i=1;;
while (num<=n)
{
    ans+=(i++);
    num=num*10+d;
    /* code */
}
cout<<ans<<endl;
    }
}