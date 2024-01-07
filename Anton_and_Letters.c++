#include <bits/stdc++.h>
using namespace std;
int main() {
    int total=1;
    vector<char> string;
    while(true)
    {
        char temp;
        cin>>temp;
        if(isalpha(temp))
        {
            string.push_back(temp);
        }
        if(temp=='}')
        {
            break;
        }
    }
    sort(string.begin(),string.end());
    if(string.empty())
    {
        cout<<0;
        return 0;
    }
    for(int i=0;i<string.size()-1;i++)
    {
        if(string[i]!=string[i+1])
        {
            total++;
        }
    }
    cout<<total;
    return 0;
}