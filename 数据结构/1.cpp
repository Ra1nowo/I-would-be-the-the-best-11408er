#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int s = 0;
    int x;
    for (int a = 1; a <= n; ++a) {
        s = 0; 
        for (int b = 100 * a - 1; b >= 100 * a - 99; b -= 2) {
            for (int k = 1; k <= sqrt(b); k += 2) {
                if (b % k == 0) {
                    x = 1;
                    break; 
                }
            }
            s += x;
        }
        if (s == 50) {
            cout << a << endl;
            break;
        }
    }
    return 0;
}
