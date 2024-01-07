#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int rating;
        cin>>rating;
        if(rating<=1399)
        cout<<"Division 4"<<endl;
        else if(1400<=rating && rating<=1599)
        cout<<"Division 3"<<endl;
        else if(1600<=rating && rating<=1899)
        cout<<"Division 2"<<endl;
        else
        cout<<"Division 1"<<endl;
    }
    return 0;
}