/*input
12345678912 428424488
*/
#include<bits/stdc++.h>

using namespace std;

#define int long long
int gcd(int a, int b) {
    if(a < b) swap(a, b);
    if(b==0) return a;
    return gcd(b, a%b);
}

int lcm(int a, int b) {
    return (a*b)/gcd(a, b);
}

int a, b;
signed main() {
    cout << "Nhap vao hai so: ";
    cin >> a >> b;

    cout << endl;
    cout << "Uoc chung lon nhat: " << gcd(a, b) << endl;
    cout << "Boi chung nho nhat: " << lcm(a, b) << endl;

    return 0;
}
