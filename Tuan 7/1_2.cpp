#include<bits/stdc++.h>

using namespace std;

#define N 100005
int n, ini_array[N];
int cnt, fin_array[N];

int main() {
    cout << "Enter size of the initial array: \n";
    cin >> n;
    cout << "Enter entries of the initial array: \n";
    for(int i = 1;i <= n;i++)
        cin >> ini_array[i];

    sort(ini_array+1, ini_array+n+1);

    fin_array[++cnt] = ini_array[1];

    for(int i = 2;i <= n;i++)
        if(ini_array[i] != ini_array[i-1])
            fin_array[++cnt] = ini_array[i];

    cout << "The final array: " << endl;
    for(int i = 1;i <= cnt;i++)
        cout << fin_array[i] << ' ';
    return 0;
}
/*
20
5 6 7 8 6 6 5 1 2 232 4324 232 0 0 10 1 10 2 9 9
*/
