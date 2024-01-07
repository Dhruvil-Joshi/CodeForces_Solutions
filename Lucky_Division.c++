#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    cin>>a;
    if(a%4==0 || a%7==0 || a%47==0 || a%74==0 || a%474==0 || a%477==0|| a%747==0 ||a%774==0)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}