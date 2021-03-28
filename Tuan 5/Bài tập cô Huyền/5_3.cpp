#include<bits/stdc++.h>

using namespace std;

#define EP 0.0000000001
double func(double x) {
    return x*x*x+2*x*x-3*x-1;
}

void bisection(double a, double b) {
    if(func(a)*func(b) >= 0.0) {
        cout << "a va b phai khac dau.\n";
        return;
    }
    double c = (b+a)/2;

    while(abs(func(c)) >= EP) {
        if(func(c)*func(a) <= 0.0) b = c;
        else a = c;
        c = (b+a)/2;
    }
    cout << "Nghiem gan dung cua phuong trinh la: \n";
    cout << setprecision(9) << c;
}

double A, B;
int main() {
    cout << "Nhap khoang cach ky nghiem A, B:\n";
    cin >> A >> B;
    bisection(A, B);
    return 0;
}
