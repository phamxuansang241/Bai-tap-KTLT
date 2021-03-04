/*input
200000047103
*/
#include<bits/stdc++.h>

using namespace std;

#define int long long

bool is_prime(int x) {
    if(x < 2) return false;
    for(int i = 2;i*i <= x;i++)
        if(x%i==0) return false;

    return true;
}

int n;
signed main() {
    cin >> n;

    if(is_prime(n)) cout << "Day la so nguyen to." << endl;
    else cout << "Day khong phai so nguyen to." << endl;
}
