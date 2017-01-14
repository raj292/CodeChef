//CodeChef
//Beginner Practice Problem
//Farmer And His Plot [RECTSQ]

#include <bits/stdc++.h>
using namespace std;

int main()
{
unsigned long long t=0;
cin>>t;

while(t--)
  {
  unsigned long long n=0,m=0;
  cin>>n>>m;
  cout<<(n/__gcd(n,m))*(m/__gcd(n,m))<<"\n";
  }
return 0;
}
