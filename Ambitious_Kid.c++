#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> arr;
    int min;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a<0)
        a=a*(-1);
        arr.push_back(a);
    }
    cout<<*min_element(arr.begin(),arr.end());
    return 0;
}