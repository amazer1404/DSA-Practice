#include<bits/stdc++.h>
using namespace std;


int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    // cout << "Enter the index: ";
    cin >> n;
    // cout << "Fibonacci number at index " << n << " is " << fibonacci(n) << endl;
    cout<<fibonacci(n)<<endl;
    return 0;
}