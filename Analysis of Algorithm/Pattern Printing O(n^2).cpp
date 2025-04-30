#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=0; i<=n; i++)
    {
     cout<<" ";
     for(int j=i+1; j<=n; j++)
       cout<<"*"<<" ";
     cout<<"\n";
    }
    return 0;
}

// Time Complexity = O(n^2)
// Space complexity = O(1)
