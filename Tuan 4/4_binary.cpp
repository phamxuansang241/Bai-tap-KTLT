// Tìm số bé nhất mà lớn hơn x
#include<bits/stdc++.h>

using namespace std;

#define N 100005
int n, my_array[N], x;

int main() {
    cout << "Enter size of array: \n";
    cin >> n;
    cout << "Enter entries of array: \n";
    for(int i = 1;i <= n;i++)
        cin >> my_array[i];

    sort(my_array+1, my_array+n+1);
    for(int i = 1;i <= n;i++)
        cout << my_array[i]<< ' ';
    cout << "Enter x: ";
    cin >> x;
    int left = 1, right = n, mid = (left+right)/2;

    while(left != mid && right != mid) {
        cout << mid << ' ' << left << ' ' << right << ' '<<my_array[mid] << endl;
        if(my_array[mid] > x) right = mid;
        else left = mid;

        mid = (left+right)/2;
    }

    cout << my_array[mid+1];
    return 0;
}
/*
15
989 900 988 78 22 5 3 43 983 34 232 3424 32 99 100
*/
