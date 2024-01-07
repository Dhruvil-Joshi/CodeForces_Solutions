#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int cnt1,cnt2,cnt3;
    cnt1=k*l/nl;
    cnt2=c*d;
    cnt3=p/np;
    cout<<min(cnt1,(min(cnt2,cnt3)))/n;
}