#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int a {0};
    long b {0};
    char c {0};
    float d {0.0f};
    double e {0.0};
    cin >> a >> b >> c >> d >> e;
    cout << a << endl << b << endl << c << endl << fixed << setprecision(3) << d << endl << fixed << setprecision(9) << e << endl;
}