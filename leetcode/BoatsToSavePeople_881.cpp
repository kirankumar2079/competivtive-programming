#include<bits/stdc++.h>
using namespace std;

int numRescueBoats(vector<int>& people, int limit) {
        
    sort(people.begin() , people.end());
    
    int i = 0 ;
    int j = people.size() - 1 ;
    int ans = 0 ;

    while( i<=j )
    {
        if( people[i]+people[j] <= limit )
        {
            ans++;
            i++;
            j--;
        }
        else
        {
            ans++;
            j--;
        }
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
    int n;
    cin>>n;
    vector<int> people;
    int ele;
    for(int i=0; i<n ;i++)
    {
        cin>>ele;
        people.push_back(ele);
    }
    int limit;
    cin>>limit;
    cout<<numRescueBoats(people , limit);
}


