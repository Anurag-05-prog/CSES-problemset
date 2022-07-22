#include <bits/stdc++.h>
using namespace std;
int main() {
    /*long long int n,i;cin>>n;
    long long int j=(n/2)+1,k=1;
    if (n==2||n==3) cout<<"NO SOLUTION";
    else {
        for (i=0;i<n;i++) {
            if (i%2) {
                cout<<k<<" ";
                k++;
            }
            else {
                cout<<j<<" ";
                j++;
            }
        }
    }*/
    long long int n,i;cin>>n;
    long long int j=2,k=1;
    if (n==2||n==3) cout<<"NO SOLUTION";
    else {
        if (n%2) {
            for (i=0;i<n;i++) {
                if (j<n) {
                    cout<<j<<" ";
                    j+=2;
                }
                else {
                    cout<<k<<" ";
                    k+=2;
                }
            }
        }
        else {
            for (i=0;i<n;i++) {
                if (j<=n) {
                    cout<<j<<" ";
                    j+=2;
                }
                else {
                    cout<<k<<" ";
                    k+=2;
                }
            }
        }
    }
    return 0;
}