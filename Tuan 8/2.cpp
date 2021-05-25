#include<bits/stdc++.h>

using namespace std;

class Query {
private:
    string name;
    string ip_address;
    string content;
    float time;
public:
    friend bool operator < (const Query& lhs, const Query& rhs);
    friend bool operator > (const Query& lhs, const Query& rhs);
    Query(string name, string ip_address, string content, float time);
    string getName();
    string getIp_address();
    string getContent();
    float getTime();
};

bool operator < (const Query& lhs, const Query& rhs) {
    if(lhs.time == rhs.time)
        return lhs.name < rhs.name;
    return lhs.time < rhs.time;
}

bool operator > (const Query& lhs, const Query& rhs) {
    if(lhs.time == rhs.time)
        return lhs.name > rhs.name;
    return lhs.time > rhs.time;
}

Query::Query(string name, string ip_address, string content, float time):name(name), ip_address(ip_address), content(content), time(time)
{}

string Query::getName() {
    return name;
}

string Query::getIp_address() {
    return ip_address;
}

string Query::getContent() {
    return content;
}

float Query::getTime() {
    return time;
}

int n;
vector<Query> vectorQuery;
string qname, qip_address, qcontent;
float qtime;

priority_queue<Query, vector<Query>, greater<vector<Query>::value_type>> my_server;

int main() {
    cout << "Enter number of the queries: ";
    cin >> n;
    fflush(stdin);
    for(int i = 0;i < n;i++) {
        getline(cin, qname);
        fflush(stdin);
        getline(cin, qip_address);
        fflush(stdin);
        getline(cin, qcontent);
        cin >> qtime;
        fflush(stdin);
        vectorQuery.push_back(Query(qname, qip_address, qcontent, qtime));
    }

    for(auto it = vectorQuery.begin();it != vectorQuery.end();it++)
        my_server.push(*it);

    cout << endl << "Print queries with First In First Out." << endl << endl;
    while(!my_server.empty()) {
        Query cur = my_server.top();
        cout << "Name: " << cur.getName() << endl;
        cout << "Ip address: " << cur.getIp_address() << endl;
        cout << "Content: " << cur.getContent() << endl;
        cout << "Time: " << cur.getTime() << endl;
        cout << endl;
        my_server.pop();
    }
    return 0;
}
/*
4
Chuyen tien
12.01.2001
I love you
12.30
Rut tien
24.01.2001
I need money
13.00
Nap tiep
12.24.01
Money here
9.00
Rut tien
01.24.12
I love @@
1.32
*/
