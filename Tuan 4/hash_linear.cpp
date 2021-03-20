#include<bits/stdc++.h>

using namespace std;

string hashTable[103];
int hashTableSize = 103;

const int p = 53;

int modpow(int x, int y, int mod) {
    if(y == 0) return 1%mod;
    int u = modpow(x, y/2, mod);
    u = (u*u)%mod;
    if(y%2) u = (u*x)%mod;

    return u;
}

int hashing(string s) {
    int res = 0;
    for(int i = 0;i < s.size();i++) {
        int add = (int(s[i])*modpow(p, i, 1007))%1007;
        res = (res + add)%1007;
    }
    return res;
}

void inserting(string s)
{
    int index = hashing(s)%hashTableSize;
    int h = 1;
    while(hashTable[index] != "")
    {
        index = (index + h*h) % hashTableSize;
        h++;
    }
    cout << "Insert successful." << endl << endl;

    hashTable[index] = s;
}

void searching(string s)
{
    int index = hashing(s)%hashTableSize;
    int h = 1;
    while(hashTable[index] != s && hashTable[index] != "")
    {
        index = (index + h*h) % hashTableSize;
             h++;
    }

    if(hashTable[index] == s)
        cout << s << " is found!" << endl;
    else
        cout << s << " is not found!" << endl;
}

int main() {
    //freopen("hash.inp", "r", stdin);
    //freopen("hash.out", "w", stdout);
    int n;
    string str;

    cin >> n;
    for(int i = 1;i <= n;i++) {
        cin >> str;
        inserting(str);
    }

    while(true) {
        cin >> str;
        searching(str);
    }
    return 0;
}
