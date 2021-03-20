#include<bits/stdc++.h>

using namespace std;

#define pb push_back

//Public key (e, n)
//Private key (d, n)
//d là c

//d đồng dư với e^-1 (mod Carmichael(n))
//Carmichael(n) = m

//d = (e^-1 mod m) = e^(euler(m)-1) (mod m)

//euler(m) = xonggggg


//n = p*q
//Carmichael(n) = LCM(p-1, q-1) = (p-1)(q-1)/GCD(p-1, q-1)

int p, q, e, d, n;

int gcd(int a, int b) {
    if(a < b) swap(a, b);
    if(b == 0) return a;
    return gcd(b, a%b);
}

int lcm(int a, int b) {
    return a*b/gcd(a, b);
}

int newpow(int x, int y, int m) {
    if(y == 0) return 1%m;
    if(y == 1) return x%m;

    int u = newpow(x, y/2, m);
    u = (u*u)%m;

    if(y%2) u = (u*x)%m;

    return u;
}

int a[100005];
int euler(int n) {

    int id = 1;
    for(int i = 2;i*i <= n;i++)
        while(n%i==0) {
            n = n/i;
            a[id] = i;
            id++;
    }

    int ans = 1, left = 1;

    if(id == 2)
        return n-1;

    for(int i = 2;i <= id;i++)
        if(a[i] != a[i-1]) {
            ans = ans*pow(a[i-1], i-left-1)*(a[i-1]-1);
//            cout << a[i-1] << ' ' << a[i] << ' ' << i << ' ' << left << ' ' << ans << endl;
            left = i;


        }

    return ans;
}

//7779 = 77*100 + 79
// 77 -> O
// 79 -> M

void change_to_ascii(int n) {
    int x = n/100;
    // 7779 / 100 = 77

    if(x == 0) cout << '_';
    else cout << char(x);

    // 7779 % 100 = 79
    x = n%100;
    if(x == 0) cout << '_';
    else cout << char(x);
}

int main() {
    cin >> p >> q >> e;
    n = p*q;

    int lamda = lcm(p-1, q-1);
    d = newpow(e, euler(lamda)-1, lamda);


    newpow(12702, d, n); // 7749
    change_to_ascii(newpow(12702, d, n));
    return 0;
}
