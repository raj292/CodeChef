//CodeChef
//Beginner Practice Problem
//Devu and Grapes [DEVUGRAP]

#include <bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

unsigned long long t=0;
cin>>t;

while(t--)
    {
    unsigned long long n=0,k=0,r=0,c=0;
    cin>>n>>k;
    vector <unsigned long long> v(n);
    for(unsigned long long i=0;i<n;i++) {cin>>v[i];}
    for(unsigned long long i=0;i<n;i++)
        {
        r=v[i]%k;
        if(v[i]>=k) {c+=min(r,k-r);}
        else {c+=k-r;}
        }
    cout<<c<<"\n";
    }
return 0;
}
