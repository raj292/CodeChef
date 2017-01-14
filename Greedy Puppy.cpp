//CodeChef
//Beginner Practice Problem
//Greedy Puppy [GDOG]

#include <bits/stdc++.h>
using namespace std;

int main()
{
unsigned long long t=0;
cin>>t;

while(t--)
    {
    unsigned long long n=0,k=0;
    cin>>n>>k;

    vector <unsigned long long> v;
    unsigned long long temp=0,a=k;

    for(unsigned long long i=0;i<k;i++)
      {
      temp=n%a;
      v.push_back(temp);
      a--;
      }
    sort(v.begin(),v.end());
    cout<<v[k-1]<<endl;
    }
return 0;
}
