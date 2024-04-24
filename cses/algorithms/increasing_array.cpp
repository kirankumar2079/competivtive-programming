#include<bits/stdc++.h>
using namespace std;
#define ll long long

// Approach 1 - modify the input
ll approach1(ll n , vector<ll> nums)
{
    ll ans = 0;
    ll diff = 0;
    for(ll i = 1 ; i < n ; i++ )
    {   
        if( nums[i] < nums[i-1] )
        {
            diff = nums[i-1] - nums[i];
            ans += diff ;
            nums[i] += diff;
        }
    }
    return ans;

}



// Approach 2 - do not change the input
ll approach2(ll n , vector<ll> nums)
{
    ll mx = 0;
    ll ans = 0;
    for(ll i=0 ; i< n ; i++)
    {
        mx = max(mx , nums[i]);
        ans += abs(mx - nums[i]);
    }
    return ans;
    
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
    vector<ll> nums ;
    int ele;
    for(ll i=0;i<n;i++)
    {
        cin>>ele;
        nums.push_back(ele);
    }
    cout<<approach2(n,nums);
   
}



