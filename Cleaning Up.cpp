//CodeChef
//Easy Practice Problem
//Cleaning Up [CLEANUP]

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
    long long m=0,n=0;
    cin>>n>>m;

    vector <long long> d(m),c(n),a(n),x(n),v(n);
    vector <long long>::iterator s;
    for(long long i=0;i<n;i++) {x[i]=i+1;}
    for(long long i=0;i<m;i++) {cin>>d[i];}
    sort(d.begin(),d.end());

    s=set_difference(x.begin(),x.end(),d.begin(),d.end(),v.begin());
    v.resize(s-v.begin());

    for(long long i=0;i<v.size();i++)
        {
        if(i%2!=0) {c[i]=v[i];}
        else {a[i]=v[i];}
        }
        for(long long i=0;i<v.size();i++)
            {
            if(a[i]==0) {continue;}
            cout<<a[i]<<" ";
            }
    cout<<"\n";
    for(long long i=0;i<v.size();i++)
        {
        if(c[i]==0) {continue;}
        cout<<c[i]<<" ";
        }
    cout<<"\n";
    }
return 0;
}
