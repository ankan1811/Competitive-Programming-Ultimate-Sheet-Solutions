#include <iostream>

using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        long sum = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x < 0)//if unknown then calculate by given process in question
			 {
                x = sum / i;
            }
            sum += x;
            cout << x << ' ';//number of criminals=number of bullets
            // as in the question it is said he cdoes not want to carry extra bullets
        }
        cout << '\n';
    }
    return 0;
}

