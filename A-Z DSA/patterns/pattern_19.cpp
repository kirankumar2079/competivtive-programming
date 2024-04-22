/* question
* * * * * * * * * * 
* * * *     * * * * 
* * *         * * * 
* *             * * 
*                 * 
*                 * 
* *             * * 
* * *         * * * 
* * * *     * * * * 
* * * * * * * * * * 
*/

#include<bits/stdc++.h>
using namespace std;

void print(int n)
{
 
      for(int i=0;i<n;i++)
    {
        // Star
        for(int j=0 ; j<n-i ; j++)
        {
            cout<<"*"<<" ";
        }
        // Space
        for(int j=0 ; j<2*i ; j++)
        {
            cout<<" ";
        }
        // Star
        for(int j=0 ; j<n-i ; j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl; 
    }
     for(int i=0;i<n;i++)
    {
        // Star
        for(int j=0 ; j<i+1 ; j++)
        {
            cout<<"*"<<" ";
        }
        // Space
        for(int j=0 ; j<2*(n-1-i) ; j++)
        {
            cout<<" ";
        }
        // Star
        for(int j=0 ; j<i+1 ; j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl; 
    }
    
}

int main()
{
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        print(n);
    }
    return 0;
}