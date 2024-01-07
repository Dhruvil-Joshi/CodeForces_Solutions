#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int total_loops;
    cin>>total_loops;
    vector<long long int> data;
    vector<long long int> num1;
    vector<long long int> num2;
    while (total_loops)
    {
        long long int middle_loops;
        cin>>middle_loops;
        while (middle_loops)
        {
            long long int inner_loops;
            cin>>inner_loops;
            while (inner_loops)
            {
                long long int a;
                cin>>a;
                data.push_back(a);
                inner_loops--;
            }
            sort(data.begin(),data.end());
            if(data.size()==1)
            {
                num1.push_back(data[0]);
                num2.push_back(data[0]);
                data.clear();
            }
            else
            {
                num1.push_back(data[0]);
                num2.push_back(data[1]);
                data.clear();
            }
            middle_loops--;
        }
        sort(num1.begin(),num1.end());
        sort(num2.begin(),num2.end());
        long long int min=num1.at(0);
        num2[0]=min;
        long long int sum=0;
        for(long long int i=0;i<num2.size();i++)
        {
            sum+=num2[i];
        }
        cout<<sum<<endl;
        num1.clear();
        num2.clear();
        total_loops--;
    }
}