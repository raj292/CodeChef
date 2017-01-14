//CodeChef
//Beginner Practice Problem
//Enormous Input Test [INTEST]

#include <bits/stdc++.h>
using namespace std;

int main()
{
unsigned long long n=0,k=0,c=0,t=0;
cin>>n>>k;

while(n--)
    {
    cin>>t;
    if(t%k==0) {c++;}
    }
cout<<c;
return 0;
}