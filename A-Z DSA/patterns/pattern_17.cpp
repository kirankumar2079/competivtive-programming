/* question
A B C D E 
A B C D 
A B C 
A B 
A 
*/

#include<bits/stdc++.h>
using namespace std;

void print(int n)
{
 
    for(int i=0;i<n;i++)
    {   
        // Spaces
        for(int j=1;j<n-i;j++)
        {
            cout<<" ";
        }
        // Charecters
        char ele = 'A';
        for(int j=1 ; j<=2*(i)+1 ; j++)
        {
           cout<<ele<<" ";
           if(j <= i) ele++ ; 
           else ele-- ;
        }
        // Spaces
        for(int j=1;j<n-i;j++)
        {
            cout<<" ";
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