#include <iostream>
using namespace std;

int sum(int x, int y) {
    return x + y;
}

int main() {
    int x, y;

    cout << "Please enter two numbers: ";
    cin >> x >> y;
    cout << "The sum is: " << sum(x, y) << endl; 
    return 0; 
}
