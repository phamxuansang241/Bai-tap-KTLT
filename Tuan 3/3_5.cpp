// abcdefgh
#include<bits/stdc++.h>

using namespace std;

int main() {
    int len = 0;
    string s;

    cin >> s;

    for(string::iterator it = s.begin();it != s.end();it++)
        len++;

    printf("Do dai cua chuoi : %d", len);

    return 0;
}
