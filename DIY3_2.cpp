#include <iostream>
using namespace std;


inline int minVal(int a, int b) {
    return (a < b) ? a : b;
}


inline int minVal(int a, int b, int c) {
    return minVal(minVal(a, b), c);
}

int main() {
    cout << "minVal(10, 20) = " << minVal(10, 20) << endl;
    cout << "minVal(5, 2, 8) = " << minVal(5, 2, 8) << endl;
    return 0;
}
