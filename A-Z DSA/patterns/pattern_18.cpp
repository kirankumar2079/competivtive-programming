/* question
E 
E D 
E D C 
E D C B 
E D C B A  
*/

#include<bits/stdc++.h>
using namespace std;

void print(int n)
{
 
    for(int i=0;i<n;i++)
    {
        char ele = 'A' + n-1 ;
        for( int j=0;j<=i;j++)
        {
            cout<<ele<<" ";
            ele--;
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