#include <iostream>
    using namespace std;
    int isprime(int n)
    {
    for (int i = 2; i <= n / 2; i++)
       {
           if (n % i == 0)
            return 0;
       }
    return 1;
    }
    void checknum(int a,int b)
{
    int num1=isprime(a);
    int num2=isprime(b);
    if(num1==0 && num2==0)
    cout<<a<<" "<<b;
    else
    {
        a++;
        b--;
        checknum(a,b);
    }
}
    int main() {
    int n;
    cin>>n;
    int a=4,b=n-4;
    checknum(a,b);
    return 0;
}