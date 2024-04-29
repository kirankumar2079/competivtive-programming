#include<bits/stdc++.h>
using namespace std;
#define ll long long

void toh(int n ,int a , int b , int c)
{
    if(n == 0)
    {
        return ;
    }
    toh(n-1 , a ,c ,b );
    cout<<a<<' '<<c<<endl;
    toh(n-1 , b , a, c );
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
    
   cout << (1<<n) - 1 <<endl;

   toh(n,1,2,3);
}



