#include<bits/stdc++.h>
using namespace std;
#define ll long long

 int findMaxK(vector<int>& nums) {
    int len = nums.size();

    // sort the vector 
    sort(nums.begin() , nums.end());
    int i = 0 ;
    int j = len-1 ;

    // double pointer 

    while( i<=j )
    {
        if(nums[i]+nums[j] == 0)
        {
            
            return nums[j] ;
        }
        else if( abs(nums[i]) < abs(nums[j]) )
        {
            j--;
        }
        else if(abs(nums[i]) > abs(nums[j]))
        {
            i++;
        }
        else{
            i++ ;
            j--;
        }

    }

    return -1;
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
    vector<int> nums;
    int ele;
    for(int i=0; i<n ;i++)
    {
        cin>>ele;
        nums.push_back(ele);
    }
    cout<<findMaxK(nums);
}



