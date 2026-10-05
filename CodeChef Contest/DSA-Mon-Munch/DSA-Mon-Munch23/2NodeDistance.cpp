// Problem Statement : https://www.codechef.com/DSAMONDAY023/problems/NODESDIST

#include <iostream>
using namespace std;

int main() {
  int N, u, v;
  cin >> N >> u >> v;

  vector<vector<int>> graph(N + 1);

  // Read the N-1 edges
  for (int i = 0; i < N - 1; i++) {
    int a, b;
    cin >> a >> b;

    graph[a].push_back(b);
    graph[b].push_back(a);
  }

  // distance[i] stores distance from u to node i
  vector<int> distance(N + 1, -1);

  queue<int> q;

  // Start from u
  q.push(u);
  distance[u] = 0;

  while (!q.empty()) {
    int current = q.front();
    q.pop();

    for (int next : graph[current]) {

      if (distance[next] == -1) {
        distance[next] = distance[current] + 1;
        q.push(next);
      }
    }
  }

  cout << distance[v] << endl;

  return 0;
}