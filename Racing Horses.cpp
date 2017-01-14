//CodeChef
//Easy Practice Problem
//Racing Horses [HORSES]

#include <bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);

long long t=0;
cin>>t;

while(t--)
    {
    long long n=0;
    cin>>n;

    vector <long long> v(n);
    for(long long i=0;i<n;i++)
        {
        cin>>v[i];
        }
    sort(v.begin(),v.end());

    long long d=v[1]-v[0];
    for(long long i=0;i<n-1;i++)
        {
        if(v[i+1]-v[i]<d) {d=v[i+1]-v[i];}
        }
    cout<<d<<"\n";
    }
return 0;
}
