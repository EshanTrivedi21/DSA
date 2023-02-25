#include <iostream>
using namespace std;
void func(int n) {
    if (n > 0) {
        func(n - 1);
        cout << n << " ";
    }
}
int main () {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    func(n);    
    return 0;
}