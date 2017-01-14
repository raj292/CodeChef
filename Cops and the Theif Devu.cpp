//CodeChef
//Beginner Practice Problem
//Cops and the Theif Devu [COPS]

#include <bits/stdc++.h>
using namespace std;

int main()
{
unsigned long long t=0;
cin>>t;

while(t--)
  {
  long long m=0,x=0,y=0,temp=0,total=0;
  cin>>m>>x>>y;
  bool b[101]={0};

  for(long long i=0;i<m;i++)
    {
    cin>>temp;
    for(long long j=temp-(x*y);j<temp+x*y+1;j++) {if(j>0&&j<101) {b[j]=1;}}
    }

  for(long long i=1;i<101;i++) {if(b[i]==0) {total++;}}
  cout<<total<<"\n";
  }
return 0;
}
