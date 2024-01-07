#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned long int total,num1,num2,difference,answer,check;
    cin>>total;
    for(unsigned long int i=0;i<total;i++)
    {
        cin>>num1>>num2;
        difference=num2-num1;
        if(num1>num2)
        difference=difference*(-1);
        check=difference%10;
        answer=difference/10;
        if(check>0)
        answer++;
        cout<<fixed<<answer<<endl;
    }
    return 0;
}