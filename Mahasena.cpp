//CodeChef
//Beginner Practice Problem
//Mahasena [AMR15A]

#include <bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long long n=0,temp=0,e=0,o=0;
cin>>n;

for(unsigned long long i=0;i<n;i++)
  {
  cin>>temp;
  if(temp%2==0) {e++;}
  else {o++;}
  }
if(e>o) {cout<<"READY FOR BATTLE\n";}
else {cout<<"NOT READY\n";}
return 0;
}
