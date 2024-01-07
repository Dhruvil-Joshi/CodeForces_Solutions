#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int loop;
    cin>>loop;
    for(int i=0;i<loop;i++)
    {
    long long int n;
    cin>>n;
    if(n%2!=0)
    cout<<"YES"<<endl;
    else
    {
        float i = log2(n);
        // check if n is a power of 2
        if (ceil(i) == floor(i)) 
        {
          cout<<"NO"<<endl;//is a power of 2";
        } 
        else 
        {
          cout <<"YES"<<endl;//is not a power of 2";
        }
    }
    }
    return 0;
}