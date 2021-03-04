// Read a file
#include<bits/stdc++.h>

using namespace std;

int main() {
    string line;

    ifstream myfile("lover.txt");

    if(myfile.is_open()) {
        while(getline(myfile, line)) {
            cout << line  <<  endl;
        }
        myfile.close();
    }
    return 0;
}
