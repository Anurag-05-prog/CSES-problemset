#include <iostream>
using namespace std;

int main() {
    int n, k = 5, ans = 0; cin >> n;
    while(n / k != 0) {
        ans += n / k;
        k *= 5;
    }
    cout << ans << endl;
}