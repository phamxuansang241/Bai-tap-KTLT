#include<bits/stdc++.h>

using namespace std;

#define N 100005
#define inf 1000000000

int n, my_array[N], num;

int find_min(int a[]) {
    int res = inf;
    for(int i = 1;i <= n;i++)
        res = min(res, a[i]);
    return res;
}

int find_max(int a[]) {
    int res = -inf;
    for(int i = 1;i <= n;i++)
        res = max(res, a[i]);
    return res;
}

int find_element(int a[], int x) {
    for(int i = 1;i <= n;i++)
        if(a[i] == x) return i;
    return 0;
}

int main() {
    cout << "Enter size of array: \n";
    cin >> n;
    cout << "Enter entries of array: \n";
    for(int i = 1;i <= n;i++)
        cin >> my_array[i];

    cout << '\n';
    cout << "Min element is: " << find_min(my_array) << "\n\n";
    cout << "Max element is: " << find_max(my_array) << "\n\n";

    cout << "Enter umber need to find: \n";
    cin >> num;
    int pos = find_element(my_array, num);
    if(pos == 0)
        cout << "Cannot find " << num << '\n';
    else
        cout << num << " at position " << pos;
    return 0;
}

/*
10
9 34 2 43 21 42 43 100 43 199
*/
