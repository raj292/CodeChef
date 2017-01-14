//CodeChef
//Beginner Practice Problem
//Cooking Maching [COOKMACH]

#include <bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long long t=0;
cin>>t;
while(t--)
    {
    long long a=0,b=0,c=0;
    cin>>a>>b;
    while(b%a!=0) {a/=2; c++;}
    while(b!=a) {a*=2; c++;}
    cout<<c<<"\n";
    }
return 0;
}
