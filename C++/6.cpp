#include <iostream>

using namespace std;

int max(int& a, int& b, int& c, int& d) {
    int max {0};
    if (a > b && a > c && a > d) return a;
    else if (b > a && b > c && b > d) return b;
    else if (c > a && c > b && c > d) return c;
    else return d;
}

int main() {
    int a, b, c, d {0};
    cin >> a >> b >> c >> d;
    cout << max(a, b, c, d) << endl;
}