//CodeChef
//Beginner Practice Problem
//Coins and Triangle [TRICOIN]

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
    long long n=0;
    cin>>n;
    cout<<(long long)(sqrt(1+8*n)-1)/2<<"\n";
    }
return 0;
}
