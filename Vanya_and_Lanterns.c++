#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    vector<double> lanterns;
    for(int i=0;i<n;i++)
    {
        long double a;
        cin>>a;
        lanterns.push_back(a);
    }
    sort(lanterns.begin(),lanterns.end());
    vector<double> diameters;
    diameters.push_back((lanterns[0]-0)*2);
    for(int i=0;i<n-1;i++)
    {
        int a;
        a=lanterns[i+1]-lanterns[i];
        diameters.push_back(a);
    }
    diameters.push_back((m-lanterns[n-1])*2);
    long double r=*max_element(diameters.begin(),diameters.end());
    long double radius=r/2;
    cout<<setprecision(50)<<radius;
    return 0;
}