#include<bits/stdc++.h>

using namespace std;

int n; // Chieu cao cay

int main() {
    cout << "Nhap chieu cao cay thong: ";
    cin >> n;
    cout << endl;

    for(int i = n-1;i >= 0;i--) {

        for(int j = 0;j < 2*n;j++) {
            if(j < i) cout << ' ';
            else if(j >= 2*n-i) cout << ' ';
            else cout << '*';
        }

        cout << endl;
    }

    for(int i = 0;i < 3;i++)
        for(int j = 0;j < 2*n;j++)
            if(j < n-2) cout << ' ';
            else {
                cout << "||||" << endl;
                break;
            }
    return 0;
}

