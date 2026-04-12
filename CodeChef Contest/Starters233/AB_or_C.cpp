#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int N;
    cin >> N;

    // store (value, index)
    int val[600000];
    int idx[600000];

    int k = 0;

    // input
    for (int i = 0; i < N; i++) {
      int a, b, c;
      cin >> a >> b >> c;

      val[k] = a;
      idx[k++] = i;
      val[k] = b;
      idx[k++] = i;
      val[k] = c;
      idx[k++] = i;
    }

    int total = 3 * N;

    // 🔹 Bubble Sort (based on val[])
    for (int i = 0; i < total - 1; i++) {
      for (int j = 0; j < total - i - 1; j++) {
        if (val[j] > val[j + 1]) {
          // swap values
          int temp = val[j];
          val[j] = val[j + 1];
          val[j + 1] = temp;

          // swap index also
          int temp2 = idx[j];
          idx[j] = idx[j + 1];
          idx[j + 1] = temp2;
        }
      }
    }

    int freq[200005] = {0};
    int covered = 0;

    int left = 0;
    int ans = 1000000000;

    // sliding window
    for (int right = 0; right < total; right++) {

      if (freq[idx[right]] == 0)
        covered++;

      freq[idx[right]]++;

      while (covered == N) {
        int diff = val[right] - val[left];
        if (diff < ans)
          ans = diff;

        freq[idx[left]]--;

        if (freq[idx[left]] == 0)
          covered--;

        left++;
      }
    }

    cout << ans << endl;
  }

  return 0;
}