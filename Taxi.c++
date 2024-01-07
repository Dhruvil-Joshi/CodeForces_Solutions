#include <iostream>
using namespace std;
int main() {
    int n,cnt1=0,cnt2=0,cnt3=0,cnt4=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a==1)
        {
            cnt1++;
        }
        else if(a==2)
        {
            cnt2++;
        }
        else if(a==3)
        {
            cnt3++;
        }
        else if(a==4)
        {
            cnt4++;
        }
    }
    int total=0;
    total+=cnt4+cnt3;
    if(cnt3-cnt1>=0)
    {
        if(cnt2%2==0){
            total+=cnt2/2;
        }
        else{
            total+=(cnt2/2)+1;
        }
    }
    else
    {
        cnt1=cnt1-cnt3;
        total+=cnt1/4;
        cnt1=cnt1%4;
        if(cnt2>1)
        {
            total+=cnt2/2;
            cnt2=cnt2%2;
        }
            if(cnt2==1)
            {
             total+=1;
             cnt1=cnt1-2;
            }
            total+=cnt1/4;
            cnt1=cnt1%4;
            if(cnt1!=0&&cnt1>0)
            {
                total+=1;
            }
    }
    cout<<total;
    return 0;
}