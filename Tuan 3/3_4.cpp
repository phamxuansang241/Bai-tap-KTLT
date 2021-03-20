/*
6
1 2 3 4 5 6
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, sum = 0, *ptr;
    int a[100];

    cin >> n;


    for(int i = 0;i < n;i++)
        cin >> a[i];

    ptr = a;
    for(int i = 0;i < n;i++) {
        sum = sum + *ptr;
        ptr++;
    }

    cout << "Tong cua day: " << sum;
    return 0;
}


