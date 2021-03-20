#include<bits/stdc++.h>

using namespace std;

#define inf 100000000
#define N 10005
int n;
int a[N];

int main() {
    cout << "Enter size of array: \n";
    cin >> n;
    cout << "Enter entries of array: \n";

    for(int i = 0;i < n;i++)
        cin >> a[i];

    int *ptr;
    ptr = a;
    cout << '\n';
    for(int i = 0;i < n;i++)
        cout << *(a+n-i-1) << ' ';
    return 0;
}
/*
10
3 43 35 56 23 1 2 90 8 33
*/

