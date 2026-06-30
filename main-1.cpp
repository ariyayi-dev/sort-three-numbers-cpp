#include <iostream>
using namespace std;

int main() {
    int x, y, z, t;

    cout << "Enter x, y, z: ";
    cin >> x >> y >> z;

    if (x > y) {
        t = x;
        x = y;
        y = t;
    }

    if (x > z) {
        t = x;
        x = z;
        z = t;
    }

    if (y > z) {
        t = y;
        y = z;
        z = t;
    }

    cout << x << " " << y << " " << z;

    return 0;
}
