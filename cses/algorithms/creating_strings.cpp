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
    string n;
    cin>>n;
    
    set<string> permutaions ;

    // sort before permutation
    sort(n.begin() , n.end());
    do{
        permutaions.insert(n);
    }while(next_permutation(n.begin(), n.end()));

    cout<<permutaions.size()<<endl;
    for(auto string : permutaions)
    {
        cout<<string<<endl;
    }
   
}



