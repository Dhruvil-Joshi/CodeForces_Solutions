#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int loop;
    cin>>loop;
    for(int i=0;i<loop;i++)
    {
    long long int n;
    cin>>n;
    vector<int> array;
    for(int j=0;j<n;j++)
    {
        long int a;
        cin>>a;
        array.push_back(a);
    }
    cout<<*max_element(array.begin(),array.end())-*min_element(array.begin(),array.end())<<endl;
    }
    return 0;
}