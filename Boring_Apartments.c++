#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string number;
        cin>>number;
        int num = (number[0]-49)*10;
        int size=number.size();
        if(size==4)
            cout<<num+10<<endl;
        else if(size==3)
            cout<<num+6<<endl;
        else if(size==2)
            cout<<num+3<<endl;
        else
            cout<<num+1<<endl;
    }
    return 0;
}