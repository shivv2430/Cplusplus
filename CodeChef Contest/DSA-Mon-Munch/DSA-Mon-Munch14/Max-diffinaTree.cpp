// Problem-Statement : https://www.codechef.com/DSAMONDAY014/problems/MDIT
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> tree;
vector<int> value;
long long ans = 0;

void dfs(int node, int mn, int mx) {
  ans = max(ans, (long long)max(abs(value[node] - mn), abs(value[node] - mx)));

  mn = min(mn, value[node]);
  mx = max(mx, value[node]);

  for (int child : tree[node]) {
    dfs(child, mn, mx);
  }
}

int main() {
  int N;
  cin >> N;

  value.resize(N + 1);
  tree.resize(N + 1);

  for (int i = 1; i <= N; i++)
    cin >> value[i];

  int root;

  for (int i = 1; i <= N; i++) {
    int p;
    cin >> p;

    if (p == -1)
      root = i;
    else
      tree[p].push_back(i);
  }

  dfs(root, value[root], value[root]);

  cout << ans;

  return 0;
}