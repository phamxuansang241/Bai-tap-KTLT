#include<bits/stdc++.h>

using namespace std;

#define N 100005

int n, a[N];
int f[N];

void getting() {
    f[0] = a[0];
    for(int i = 1;i < n;i++)
        f[i] = f[i-1] + a[i];
}

void solve() {
    int left = 0, right = 0;
    int cur_l = 0, cur_r;
    int ans = 0;

    for(int i = 1;i < n;i++) {
        if(f[i] <= f[i-1]) {
            cur_r = i-1;

            if(ans < (f[cur_r] - f[cur_l-1])) {
                ans = f[cur_r] - f[cur_l-1];
                right = cur_r;
                left = cur_l;
            }
        }

        if(a[i-1] <= 0 && a[i] > 0)
            cur_l = i;
    }
    cout << "Sum of desired subarray is: " << ans << endl;
    cout << "The desired subarray start from " << left << " to " << right << endl;
}
int main() {
    cout << "Enter size of array: \n";
    cin >> n;
    cout << "Enter entries of array: \n";
    for(int i = 0;i < n;i++)
        cin >> a[i];

    getting();
    solve();
    return 0;
}

/*
14
-4 4 43 -43 0 1 -4 3 4 3 4 100 -5 0

12
0 1 1 1 0 1 1 0 1 0 0 1
*/
