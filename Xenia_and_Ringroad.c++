#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int houses,check;
    cin>>houses>>check;
    long long int houseno[check];
    for(int i=0;i<check;i++)
    {
        cin>>houseno[i];
    }
    long long count=houseno[0]-1;
    for(int i=0;i<check-1;i++)
    {
        if(houseno[i]<=houseno[i+1])
        {
            count+=houseno[i+1]-houseno[i];
        }
        else
        {
            count+=houses-houseno[i];
            count+=houseno[i+1];
        }
    }
    cout<<count;
    return 0;
}