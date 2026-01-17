#include <iostream>
#include <vector>

using namespace std;
int secondLargest(vector<int> &ar) {
  int sl = -1, l = 0;
  for (int i = 1; i < ar.size(); i++) {
    if (ar[i] > ar[l]) {
      sl = l;
      l = i;
    } else if (ar[l] != ar[i]) {
      if (sl == -1 or ar[i] >= ar[sl]) {
        sl = i;
      }
    }
  }
  return sl == -1 ? -1 : ar[sl];
}
int main() {
  vector<int> ar;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    ar.push_back(x);
  }
  cout << secondLargest(ar);
}