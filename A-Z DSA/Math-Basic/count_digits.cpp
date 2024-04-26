#include<bits/stdc++.h>
using namespace std;
#define ll long long

// Approach 1 - using the / 10 method
ll approach1(ll n)
{
    ll digits = 0;

    while(n>0)
    {
        digits += 1;
        n /= 10;
    }
   
    return digits;

}


// Approach 2 - Property of logarithm
ll approach2(ll n )
{
    return log10(n)+1;
    
} 

// Approach 1
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt" , "r" , stdin );
        freopen("output.txt" , "w" , stdout);
    #endif
    // input
    ll n;
    cin>>n;

    // general approach where you jsut use the base of the decimal number system to get all the individual digits
    cout<<approach1(n)<<endl;
    cout<<approach2(n);
   
}



