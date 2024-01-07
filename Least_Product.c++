#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int loop;
    cin>>loop;
    for(int x=0;x<loop;x++)
    {
        int n;
        cin>>n;
        vector<int> arr;
        int negcount=0,pos=1,zero=0;
        for(int j=0;j<n;j++)
        {
            int temp;
            cin>>temp;
            arr.push_back(temp);
            if(temp<0)
            {
                negcount++;
                pos=arr.size();
            }
            else if(temp==0)
            {
                zero=1;
            }
        }
        if(negcount%2!=0 || zero==1)
        cout<<0<<endl;
        else
        {
            cout<<1<<endl;
            cout<<pos<<" "<<0<<endl;
        }
    }
    return 0;
}