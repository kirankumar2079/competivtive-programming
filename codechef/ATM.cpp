// Pooja would like to withdraw X $US from an ATM. The cash machine will only accept the transaction if X is a multiple of 5, and Pooja's account balance has enough cash to perform the withdrawal transaction (including bank charges). For each successful withdrawal the bank charges 0.50 $US. Calculate Pooja's account balance after an attempted transaction.

#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

int main()
{
    int X;
    float Y;
    cin>>X>>Y;
    if(X%5==0 && X<=(Y-0.50))
    {
        Y-=(X+0.50);
    }
    printf("%.2f",Y);

    
    return 0;
}