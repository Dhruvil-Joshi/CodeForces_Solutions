#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,cnt=1;
    cin>>n;    
    vector<int> arr;
    int a,b;
    cin>> a;
    for(int i=0;i<a;i++)
    {
        int c;
        cin>>c;
        arr.push_back(c);
    }
    cin>>b;
    if(a==b && a==0)
    {
        cout<<"Oh, my keyboard!"<<endl;
        return 0;
    }
    for(int i=0;i<b;i++)
    {
        int c;
        cin>>c;
        arr.push_back(c);
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size()-1;i++)
    {
        if(arr[i]!=arr[i+1])
        cnt++;
    }
    if(cnt==n)
    {
        cout<<"I become the guy."<<endl;
    }
    else
    {
        cout<<"Oh, my keyboard!"<<endl;
    }
    return 0;
}