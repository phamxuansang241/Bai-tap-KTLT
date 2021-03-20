#include<bits/stdc++.h>

using namespace std;

int main() {
    int a, b, temp;
    int *fi, *se;

    cout << "Nhap 2 so: ";
    cin >> a >> b;

    printf("Truoc khi doi cho\na = %d\nb = %d\n", a, b);
    fi = &a, se = &b;

    temp = *fi;
    *fi = *se;
    *se = temp;

    printf("After Swapping\na = %d\nb = %d\n", a, b);

    return 0;
}

