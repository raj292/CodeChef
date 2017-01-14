//CodeChef
//Beginner Practice Problem
//Who dares to be a millionaire [WDTBAM]

#include <bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);

long long t=0;
cin>>t;

while(t--)
    {
    long long n=0,c=0;
    string a="",b="";
    cin>>n;
    vector <long long> w(n+1);
    cin>>a>>b;

    for(long long i=0;i<=n;i++) {cin>>w[i];}
    for(long long i=0;i<n;i++) {if(a[i]==b[i]) {c++;}}

    if(c==n) {cout<<w[n]<<"\n";}
    else
        {
        long long min=0;
        for(long long i=0;i<=c;i++)
            {
            if(w[i]>min) {min=w[i];}
            }
    cout<<min<<"\n";
        }
    }
return 0;
}
