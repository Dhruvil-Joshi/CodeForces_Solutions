#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int range;
        cin>>range;
        vector<int> evenarray;
        vector<int> oddarray;
        int array[range];
        for(int j=0;j<range;j++)
        {
            cin>>array[j];
            if(((j%2)==0) && ((array[j]%2)!=0))
            evenarray.push_back(j);
            if(((j%2)!=0) && ((array[j]%2)==0))
            oddarray.push_back(j);
        }
        if(evenarray.size()==oddarray.size())
        cout<<evenarray.size()<<endl;
        else
        cout<<-1<<endl;
    }
    return 0;
}