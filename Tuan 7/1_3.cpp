#include<bits/stdc++.h>

using namespace std;

#define N 100005
int n, a[N], M;

void solve() {
    unordered_map<int, int> my_map;
    int cur_sum = 0;

    for(int i = 0;i < n;i++) {
        cur_sum = cur_sum + a[i];
        if(cur_sum == M) {
            cout << "The desired subarray start from index " << 0 <<  " to " << i << endl;
            return;
        }

        if(my_map.find(cur_sum - M) != my_map.end()) {
            cout << "The desired subarray start from index " << my_map[cur_sum-M]+1 << " to " << i << endl;
            return;
        }
        my_map[cur_sum] = i;
    }
    cout << "Not exist desired subarray" << endl;
}
int main() {
    cout << "Enter size of array: \n";
    cin >> n;
    cout << "Enter entries of array: \n";
    for(int i = 0;i < n;i++)
        cin >> a[i];
    cout << "Enter M:\n";
    cin >> M;

    solve();
    return 0;
}
/*
20
5 6 7 8 6 6 5 1 2 232 4324 232 0 0 10 1 10 2 9 9
252
*/

