#include<bits/stdc++.h>
using namespace std;
 
void Water_Lily()
{
    long double H,L;
    cin>>H>>L;
    cout << fixed << setprecision(10);
    cout<<setprecision(13)<<((L*L)-(H*H))/(2*H);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Water_Lily();
    return 0;
}