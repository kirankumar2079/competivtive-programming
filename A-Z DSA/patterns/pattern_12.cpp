/* question
1         1 
1 2     2 1  
1 2 3 3 2 1 
*/

#include<bits/stdc++.h>
using namespace std;

void print(int n)
{
    for(int i=1;i<=n;i++)
    {
        // number
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        // space
        for (int j=1 ; j<=2*(n-i);j++)
        {
            cout<<" ";
        }
        // number
        for(int j=i ; j>=1 ; j--)
        {
            cout<<j<<" ";
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