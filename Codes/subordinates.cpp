#include <iostream>
#include <vector>
using namespace std;

int dfs(vector<vector<int>>& adj, vector<int>& subordinates, int employee) {
    int num = 0;
    for(const int& subordinate : adj[employee]) {
        num++;
        num += dfs(adj, subordinates, subordinate);
    }
    return subordinates[employee] = num;
}

int main() {
    int employees; 
    cin >> employees;

    vector<int> tree(employees - 1);
    vector<vector<int>> adj(employees + 1, vector<int>());
    vector<int> subordinates(employees + 1);

    for(int i = 0; i < employees; i++) {
        cin >> tree[i];
    }

    for(int i = 0; i < employees - 1; i++) {
        adj[tree[i]].push_back(i + 2);
    }

    dfs(adj, subordinates, 1);

    for(int i = 1; i < employees + 1; i++) {
        cout << subordinates[i] << " ";
    }
    cout << endl;

    return 0;
}