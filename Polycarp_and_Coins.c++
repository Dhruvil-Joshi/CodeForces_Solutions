#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int loop;
    cin>>loop;
    for(long long int x=0;x<loop;x++)
    {
        long double a,ans2;
        cin>>a;
        ans2=a/3;
        ans2=round(ans2);
        cout<<setprecision(15)<<(a-(2*ans2))<<" "<<ans2<<endl;
    }
    return 0;
}