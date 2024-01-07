#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long int size;
    cin>>size;
    for(int j=0;j<size;j++)
    {
        int n;
    cin>>n;
    string s;
    cin>>s;
    if(n==1) 
    cout<<"YES"<<endl;
    else{
        bool is_dist=false;
        vector<char> uniqs;
        uniqs.push_back(s[0]);
        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1]) continue;
            else uniqs.push_back(s[i]);
        }
        for(int i=0;i<uniqs.size();i++){
            for(int j=i+1;j<uniqs.size();j++){
                if(uniqs[i]==uniqs[j]) {
                    is_dist=true;
                    break;
                }
            }
            if(is_dist) break;
        }
        if(is_dist)
        cout<<"NO"<<endl;
        else 
        cout<<"YES"<<endl;
    }
    }
    return 0;
}