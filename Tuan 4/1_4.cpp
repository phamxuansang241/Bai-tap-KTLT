#include<bits/stdc++.h>

using namespace std;

#define inf 100000000
#define N 10005
int n, x;
vector<int> a;
vector<int> app;

int main() {
    cout << "Enter size of array: \n";
    cin >> n;
    cout << "Enter entries of array: \n";


    a.push_back(-inf);
    int cnt = 0;
    for(int i = 1;i <= n;i++) {
        cin >> x;
        a.push_back(x);
    }
    a.push_back(inf);

    sort(a.begin(), a.end());

    int last = 0, mx = 0;

    for(int i = 1;i <= n+1;i++)
        if(a[i] != a[i-1]) {
            app.push_back(i-last);
            mx = max(i-last, mx);
            last = i;
        }


    vector<int>::iterator it;
    it = unique(a.begin(), a.end());
    a.resize(distance(a.begin(), it));

    cout << "Numbers appear most: \n";
    for(int i = 0;i < app.size();i++) {
        if(app[i] == mx)
            cout << a[i] << endl;
    }
    return 0;
}

/*
20
4 5 3 4 4 2 3 3 5 10 10 9 32 32 32 32 10 10 9 1
*/
