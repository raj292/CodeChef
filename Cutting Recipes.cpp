//CodeChef
//Beginner Practice Problem
//Cutting Recipes [RECIPE]

#include <bits/stdc++.h>
using namespace std;

int main()
{
unsigned long long t=0;
cin>>t;

while(t--)
    {
    unsigned long long n=0,a=0,c=0;
    cin>>n;

    vector <unsigned long long> v;
    while(n--)
        {
        cin>>a;
        c=__gcd(c,a);
        v.push_back(a);
        }

    for(unsigned long long j=0;j<v.size();j++)
        {
        cout<<v[j]/c;
        if(j!=v.size()-1) {cout<<" ";}
        }
    cout<<"\n";
    }
return 0;
}