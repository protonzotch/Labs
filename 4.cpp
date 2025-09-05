#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x, y, z;
    cin >> x;
    cin >> y;
    cin >> z;
    cout << pow(x, pow(y, z)) + pow(y, (x + z)) + pow(z, 5);
    return 0;
}
