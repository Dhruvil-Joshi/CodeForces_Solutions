#include <bits/stdc++.h>
using namespace std;
int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        long int loop;
        cin>>loop;
        for(long int i=0;i<loop;i++)
        {
            int size;
            cin>>size;
            vector<int> arr;
            long long int max=0;
            for(int j=0;j<size;j++)
            {
                int temp;
                cin>>temp;
                arr.push_back(temp);
            }
            for(int j=1;j<size;j++)
            {
                if(arr[j-1]>arr[j] && arr[j-1]>max)
                {
                    max=arr[j-1];
                }
            }
            cout<<max<<endl;
        }
    return 0;
}