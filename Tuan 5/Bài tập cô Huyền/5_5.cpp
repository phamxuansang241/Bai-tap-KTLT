#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
    if(a < b) swap(a, b);
    if(b == 0) return a;
    return gcd(b, a%b);
}

int x, y;
int main() {
    cout << "Nhap hai so x va y: \n";
    cin >> x >> y;
    cout << "GCD cua hai so la: " << gcd(x, y);
    return 0;
}
