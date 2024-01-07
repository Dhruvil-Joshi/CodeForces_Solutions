#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> num;
    int a,b,c,d;
    for(int i=0;i<4;i++)
    {
        int a;
        cin>>a;
        num.push_back(a);
    }
    sort(num.begin(),num.end());
    a = num[3]-num[2];
    b = num[0]-a;
    c = num[2]-b;
    cout<<a<<" "<<b<<" "<<c;
}