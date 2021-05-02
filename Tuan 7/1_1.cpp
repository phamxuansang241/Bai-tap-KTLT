#include<bits/stdc++.h>

using namespace std;

#define N 100005

int n;
double a[N];

double solve() {
    double res = 0.0;
    for(int i = 0;i < n-1;i++)
        for(int j = i+1;j < n;j++)
            res = res + abs(a[j]-a[i]);

    int num = n*(n-1)/2;
    return res/num;
}

int main() {
    cout << "Enter size of array: \n";
    cin >> n;
    cout << "Enter entries of array: \n";
    for(int i = 0;i < n;i++)
        cin >> a[i];

    cout << solve();

    return 0;
}
