#include<bits/stdc++.h>

using namespace std;

#define fi first
#define se second

void solve(int A, int B, int C, int D, int E, int F) {
    if((A*E-B*D) == 0 && (A*F-C*D)!=0)
        cout << "Phuong trinh vo nghiem.\n";
    else if((A*E-B*D) == 0 && (A*F-C*D)==0)
        cout << "Phuong trinh vo so nghiem.\n";
    else {
        float X = float(C*E-B*F)/float(A*E-B*D);
        float Y = float(A*F-C*D)/float(A*E-B*D);
        cout << "Phuong trinh co nghiem duy nhat.\n";
        cout << "x = " << X << endl;
        cout << "y = " << Y << endl;
    }

}
int a, b, c, d, e, f;
int main() {
    do {
        cout << "Nhap he so a, b, c trong ax+by = c: ";
        cin >> a >> b >> c;
        cout << "Nhap he so d, e, f trong dx+ey = f: ";
        cin >> d >> e >> f;

        solve(a, b, c, d, e, f);
        cout << endl;

    } while(true);
    return 0;
}

