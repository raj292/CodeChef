//CodeChef
//Beginner Practice Problem
//GCD and LCM [FLOW016]

#include <bits/stdc++.h>
using namespace std;

int main()
{
unsigned long long t=0;
cin>>t;

while(t--)
    {
    int a=0,b=0;
    cin>>a>>b;
    cout<<__gcd(a,b)<<" "<<(a*b)/(__gcd(a,b))<<"\n";
    }
return 0;
}
