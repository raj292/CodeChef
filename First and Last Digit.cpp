//CodeChef
//Beginner Practice Problem
//First and Last Digit [FLOW004]

#include <bits/stdc++.h>
using namespace std;

int main()
{
unsigned long long t=0;
cin>>t;

while(t--)
    {
    string n="";
    cin>>n;
    char f=n[0],l=n[n.length()-1];
    cout<<(f-'0'+l-'0')<<"\n";
    }
return 0;
}