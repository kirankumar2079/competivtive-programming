#include<bits/stdc++.h>
using namespace std;
#define ll long long


ll reverse_number(ll n )
{
    ll ans = 0;
    while(n>0) 
    {
        ans = (ans*10)+ (n%10) ;
        n = n/ 10;
    }   
    return ans;


}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt" , "r" , stdin );
        freopen("output.txt" , "w" , stdout);
    #endif
    // input
    ll n;
    cin>>n;
    
    cout<<reverse_number(n);
   
}



