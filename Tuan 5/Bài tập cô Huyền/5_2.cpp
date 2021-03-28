#include<bits/stdc++.h>

using namespace std;

char c;

char convert(char x) {
    if(x >= 'A' && x <= 'Z') {
        cout << "Chu cai nhap vao la chu hoa.\n";
        cout << "Chuyen thanh chu thuong: ";
        return char(x+32);
    }
    else {
        cout << "Chu cai nhap vao la chu thuong.\n";
        cout << "Chuyen thanh chu hoa: ";
        return char(x-32);
    }
}

int main() {
    cout << "Nhap 1 chu cai: ";
    cin >> c;
    cout << convert(c);
    return 0;
}

