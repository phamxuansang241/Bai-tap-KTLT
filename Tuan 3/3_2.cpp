#include<bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cout << "Nhap 2 so: ";
    cin >> a >> b;

    int *fi, *se;
    fi = &a, se = &b;

    cout << "Tong 2 so: " << *fi + *se;
    return 0;
}
