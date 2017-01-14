//CodeChef
//Beginner Practice Problem
//Malvika is peculiar about color of balloons [CHN09]

#include <bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

unsigned long long t=0;
cin>>t;

while(t--)
    {
    unsigned long long a=0,b=0;
    string s="";
    cin>>s;

    for(unsigned long long i=0;i<s.length();i++)
        {
        if(s[i]=='a') {a++;}
        else {b++;}
        }
    if(a>b) {cout<<b<<"\n";}
    else {cout<<a<<"\n";}
    }
return 0;
}
