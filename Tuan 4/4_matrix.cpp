#include<bits/stdc++.h>

using namespace std;

int fi_row, fi_col, se_row, se_col;

class matrix {
    int row, col, x[105][105];

public:
    matrix(int m, int n) {
        row = m;
        col = n;
    }

    void get();
    void display();
    matrix operator +(matrix a);
    matrix operator -(matrix a);
    matrix operator *(matrix a);
};

void matrix::get() {
    for(int i = 0;i < row;i++) {
        for(int j = 0;j < col;j++)
            cin >> x[i][j];
        fflush(stdin);
    }
}

void matrix::display() {
    for(int i = 0;i < row;i++) {
        for(int j = 0;j < col;j++)
            cout << x[i][j] << ' ' << ' ';
        cout << endl;
    }
}

matrix matrix::operator +(matrix a) {
    matrix res(row, col);
    for(int i = 0;i < row;i++)
        for(int j = 0;j < col;j++)
            res.x[i][j] = x[i][j] + a.x[i][j];
    return res;
}

matrix matrix::operator -(matrix a) {
    matrix res(row, col);
    for(int i = 0;i < row;i++)
        for(int j = 0;j < col;j++)
            res.x[i][j] = x[i][j] - a.x[i][j];
    return res;
}

matrix matrix::operator*(matrix a) {
    matrix res(row, a.col);
    for(int i = 0;i < row;i++)
        for(int j = 0;j < a.col;j++)
            for(int k = 0;k < col;k++)
                res.x[i][j] += x[i][k]*a.x[k][j];
    return res;
}

void add_matrix(matrix a, matrix b) {
    if((fi_row != se_row) || (fi_col != se_col))
        cout << "Cannot add two matrices.\n Matrices dont have same size.\n";
    else {
        matrix ans = a+b;
        cout << "Matrix sum: \n";
        ans.display();
    }
}

void subtract_matrix(matrix a, matrix b) {
    if((fi_row != se_row) || (fi_col != se_col))
        cout << "Cannot subtract two matrices.\n Matrices dont have same size.\n";
    else {
        matrix ans = a-b;
        cout << "Matrix subtraction: \n";
        ans.display();
    }

}

void multiply_matrix(matrix a, matrix b) {
    if(fi_col != se_row)
        cout << "Cannot multiply two matrices.\n";
    else {
        matrix ans = a*b;
        cout << "Matrix product: \n";
        ans.display();
    }
}
int main() {
    cout << "Enter fist matrix's size:\n";
    cin >> fi_row >> fi_col;
    cout << "Enter fist matrix's entries:\n";
    matrix fi(fi_row, fi_col);
    fi.get();

    cout << '\n';

    cout << "Enter second matrix's size:\n";
    cin >> se_row >> se_col;
    cout << "Enter fist matrix's entries:\n";
    matrix se(se_row, se_col);
    se.get();

    cout << '\n';
    add_matrix(fi, se);
    cout << '\n';
    subtract_matrix(fi, se);
    cout << '\n';
    multiply_matrix(fi, se);

    return 0;
}

/*
1 2 3 4
1 2
3 4
1 2 3 4
5 6 7 8
2 4 0 1

3 3
1 2 3
1 2 3
1 2 3
3 3
1 2 3
1 2 3
1 2 3
*/
