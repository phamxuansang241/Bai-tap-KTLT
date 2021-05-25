#include<bits/stdc++.h>

using namespace std;

int n;
string temp;
stack<string> undo;
stack<string> redo;
vector<string> Q;

void Undo() {
    string s = undo.top();
    undo.pop();
    redo.push(s);
}

void Redo() {
    string s = redo.top();
    redo.pop();
    undo.push(s);
}

void Read() {
    stack<string> rvs;

    while(!undo.empty()) {
        rvs.push(undo.top());
        undo.pop();
    }

    while(!rvs.empty()) {
        cout << rvs.top();
        rvs.pop();
    }
    cout << ' ';
}

void Write(string s) {
    string content = "";
    for(int i = 6;i < s.size();i++)
        content = content + s[i];
    undo.push(content);
}

void query() {
    for(vector<string>:: iterator it = Q.begin();it != Q.end();it++) {
        if(*it == "UNDO")
            Undo();
        else if(*it == "REDO")
            Redo();
        else if(*it == "READ")
            Read();
        else
            Write(*it);
    }
}

int main() {
    cout << "Enter the number of queries: ";
    cin >> n;
    cout << "Enter queries:\n";
    for(int i = 0;i < n;i++) {
        cin >> temp;
        Q.push_back(temp);
    }

    query();
    return 0;
}
/*
7
WRITE:PHAM
WRITE:XUAN
WRITE:SANG
UNDO
READ
REDO
READ
*/
