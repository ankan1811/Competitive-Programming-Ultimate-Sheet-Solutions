#include<bits/stdc++.h>
using namespace std;
int main() {
  // freopen("TASK.in", "r", stdin);freopen("TASK.out", "w", stdout);
  int n;
  cin >> n;
  long long sum = 0;
  int cnt = 0;
  int mx = -2e9;
  for(int i = 1; i <= n; i++) {
    int x;
    scanf("%d", &x);
    if(x >= 0) sum += 1LL * x, cnt++;//We can take the full set as a subset also.So whenever a positive number just take it to maximize sum.
    mx = max(mx, x);
  }
  if(cnt) cout << sum << " " << cnt << endl;
  else cout << mx << " " << 1 << endl;
  return 0;
}
