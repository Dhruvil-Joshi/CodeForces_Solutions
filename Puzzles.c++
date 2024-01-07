#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n;
    cin>>m;
    vector<int> vect;
    for(int i=0;i<m;i++)
    {
        int a;
        cin>>a;
        vect.push_back(a);
    }
    sort(vect.begin(),vect.end(),greater<int>());
    int min=vect[0];
    int i=0;
    int count=m-n+1;
    while(count)
    {
        if(vect[i]-vect[n+i-1]<min && vect[i]-vect[n+i-1]>=0)
        {
            min=vect[i]-vect[n+i-1];
        }
        i++;
        count--;
    }
    cout<<min;
    return 0;
}