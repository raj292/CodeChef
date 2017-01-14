//CodeChef
//Beginner Practice Problem
//Minimum Maximum [MNMX]

#include <bits/stdc++.h>
using namespace std;

int main()
{
unsigned long long t=0;
cin>>t;

while(t--)
  {
  long long n=0,temp=0;
  cin>>n;
  vector <unsigned long long> v;
  for(unsigned long long i=0;i<n;i++)
    {
    cin>>temp;
    v.push_back(temp);
    }
  sort(v.begin(),v.end());
  cout<<v[0]*(n-1)<<"\n";
  }
return 0;
}
