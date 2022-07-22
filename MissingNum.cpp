#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int n,i;cin>>n;
    long long int a[n-1];
    for (i=0;i<n-1;i++) cin>>a[i];
    sort(a,a+n-1);
    for (i=0;i<n;i++) {
        if (i+1!=a[i]) {
            cout<<i+1;
            break;
        }
    }
    return 0;
}