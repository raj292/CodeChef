//CodeChef
//Beginner Practice Problem
//Ciel and Receipt [CIELRCPT]

#include <bits/stdc++.h>
using namespace std;

int main()
{
unsigned long long t=0;
cin>>t;

vector <unsigned long long> v;
for(unsigned int i=0;i<12;i++)
    {
    unsigned long long temp=pow(2,i);
    v.push_back(temp);
    }

while(t--)
    {
    unsigned long long p=0,n=0;
    cin>>p;

    while(p>0)
        {
        for(int a=11;a>=0;a--)
            {
            if(p>=v[a])
                {
                p-=v[a];
                n++;
                a++;
                }
            }
        }
    cout<<n<<"\n";
    }
return 0;
}