#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int a[n];
    cout<<"Enter the element in array:";
    for(int i=0;i<n;++i)
    cin>>a[i];
    unordered_map<int ,int>m;
    for(int i=0;i<n;++i)
        m[a[i]]++;
        cout<<"Frequency of particular element is:\n";
    for(auto it:m)
    {
        cout<<it.first<<"-"<<it.second<<endl;
    }

    return 0;
}
