#include <bits/stdc++.h>
using namespace std;

int x = 261;
int d = 10;
int c = 0;

int foo(int a) {
    c++;
    if (a > 0) {
        return (a % 2) ? foo(a / d )*foo(a/d) : foo(a / d);
    } else {
        return 0;
    }
}

int main() {
    foo(x);
    cout << c;
}
