/* question
A 
A B 
A B C 
A B C D 
A B C D E 
*/

#include<bits/stdc++.h>
using namespace std;

void print(int n)
{
 
    for(int i=1;i<=n;i++)
    {
        for( char j = 'A' ; j<'A' + i ;j++)
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