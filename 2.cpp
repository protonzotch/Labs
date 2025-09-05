#include <iostream>
using namespace std;

int main() {
    int x, c;
    cin >> x;
    c = (x / 100000) % 10;
    cout << c;
    return 0;
}
