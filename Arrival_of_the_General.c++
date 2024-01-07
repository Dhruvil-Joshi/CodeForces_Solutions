#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int soldier[n];
    int min=100;
    int max=0;
    int max_index;
    int min_index;
    for(int i=0;i<n;i++)
    {
        cin>>soldier[i];
        if(max<soldier[i])
        {
            max=soldier[i];
            max_index=i;
        }
        if(min>=soldier[i])
        {
            min=soldier[i];
            min_index=i;
        }
    }
    if(max_index<min_index)
    cout<<max_index+n-min_index-1;
    else
    cout<<max_index+n-min_index-2;
    return 0;
}
