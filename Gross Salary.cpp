//CodeChef
//Beginner Practice Problem
//Gross Salary [FLOW011]

#include <bits/stdc++.h>
using namespace std;

int main()
{
unsigned long long t=0;
cin>>t;

while(t--)
    {
    unsigned long long s=0;
    cin>>s;
    if(s<1500) {cout<<s+(0.1*s)+(0.9*s)<<"\n";}
    else {cout<<s+(0.98*s)+(500)<<"\n";}
    }
return 0;
}
