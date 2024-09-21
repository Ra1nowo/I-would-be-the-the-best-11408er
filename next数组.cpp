#include <iostream>
using namespace std;

const int N = 1e5 + 10;
int ne[N];
string s;
void getNext(int len) {
    ne[0] = -1;
    ne[1] = -1;
    int j = -1;
    for (int i = 2; i < len; ++i) {
        while (j != -1 && s[j+1] != s[i]) j = ne[j];
        if (s[j+1] == s[i]) j++;
        ne[i] = j;
    }
}

int main() {
    cin >> s;
    int len = s.size();
    getNext(len);
    for (int i = 0; i < len; ++i) {
        if (i < len-1) {
            cout << ne[i]+1;
            cout << " ";
        }
        else {
            cout << ne[i]+1;
            cout << endl;
        }
    }
    return 0;
}