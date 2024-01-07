#include <bits/stdc++.h>
using namespace std;
  
    // Function to return GCD of two numbers
    long long gcd(long long int a, long long int b)
    {
        if (b == 0)
        return a;
        return gcd(b, a % b);
    }
 
    // Function to return LCM of two numbers
    long long lcm(int a, int b)
    {
        return (a / gcd(a, b)) * b;
    }
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int loop;
    cin>>loop;
    
    for(long long int j=0;j<loop;j++)
    {
        long long int a,b,c,num1,num2,num3,common,total1,total2,total3,total=0;
        cin>>a>>b>>c;
        num1=a/b;
        num2=a/c;
        common=lcm(b,c);
        if(common<=a)
        {
            num3=a/common;
        }
        else
        {
            num3=0;
        }
            num1=num1-num3;
            num2=num2-num3;
            total1=(a*(a+1))/2;
            total2=((a-num1)*(a-num1+1))/2;
            total3=((num2)*(num2+1))/2;
            total=total1-total2-total3;
            cout<<total<<endl;
    }
    return 0;
}