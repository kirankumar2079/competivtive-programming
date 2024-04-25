#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt" , "r" , stdin );
        freopen("output.txt" , "w" , stdout);
    #endif
    // input
    ll n;
    cin>>n;
    // sum of n numbers
    ll sum = (n*(n+1)) /2 ;
    vector<int> set1 , set2 ;
    // if sum is even
    if(sum % 2 == 0)
    {
        cout<<"YES"<<endl;
        ll half = sum / 2;
        for(ll i = n ; i>=1 ; i--)
        {
            if(i <= half)
            {
                set1.push_back(i);
                half -= i ;
            }
            else
            {
                set2.push_back(i);
            }
        }
        cout<<set1.size()<<endl;
        for(auto i: set1)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        cout<<set2.size()<<endl;
        for(auto i: set2)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
   
}



