// problem-statement:https://www.codechef.com/problems/WECREC
#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int N, X, K;
    cin >> N >> X >> K;

    map<int, int> freq; // score -> count

    for (int i = 0; i < N; i++) {
      int score;
      cin >> score;
      freq[score]++;
    }

    vector<int> scores;

    // Store all distinct scores
    for (auto it : freq) {
      scores.push_back(it.first);
    }

    // Highest scores first
    sort(scores.rbegin(), scores.rend());

    int eligible = 0;

    // Count candidates in top K clusters
    for (int i = 0; i < K && i < (int)scores.size(); i++) {
      eligible += freq[scores[i]];
    }

    cout << min(eligible, X) << "\n";
  }

  return 0;
}