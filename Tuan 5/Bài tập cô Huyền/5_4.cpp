#include<bits/stdc++.h>

using namespace std;

#define int long long
int x, n;

int f_x_n(int X, int N) {
    if(N == 0) return 1;
    int res = f_x_n(X, N/2);
    res = res*res;
    if(N%2) res = res*X;
    return res;
}

int s_n(int N) {
    if(N == 0) return 1;
    if(N == 1) return 1;
    return N*s_n(N-1);
}

signed main() {
    printf("Nhap x: ");
    scanf("%lld", &x);
    printf("Nhap n: ");
    scanf("%lld", &n);

    while(n < 0) {
        cout << "n < 0. Nhap lai: ";
        scanf("%ld", &n);
    }

    printf("f(%lld,%lld) = %lld\n\n", x, n, f_x_n(x, n));
    printf("s(%lld) = %lld", 2*n, s_n(2*n));
    return 0;
}


