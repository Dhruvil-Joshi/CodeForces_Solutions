#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        string number;
        cin>>number;
        int x=number[0]-48;
        if(number[0]=='9')
        cout<<9;
        else
        {
            if(9-x<x)
            {
                cout<<9-x;
            }
            else
            cout<<x;
        }
        for(unsigned j=1;j<number.size();j++)
        {
            x= number[j]-48;
            if(9-x<x)
            {
                cout<<9-x;
            }
            else
            cout<<x;
        }
  return 0;
}