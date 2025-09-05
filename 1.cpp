#include <iostream>
using namespace std;

int main() {
    int x, c;
    cin >> x;

    x = x * x;
    c = x * x;
    c = c * c;
    c = c * x;

    cout << c;
    return 0;
}
