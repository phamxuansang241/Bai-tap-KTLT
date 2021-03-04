// clear a file
#include<bits/stdc++.h>

using namespace std;

void read_file(string file) {
    string line;
    bool empty_file = true;

    fstream my_read(file);

    while(my_read.is_open()) {
        while(getline(my_read, line)) {
            cout << line << endl;
            empty_file = false;
        }
        my_read.close();
    }

    if(empty_file) cout << "Empty_file." << endl;
}

int main() {
    string file = "new_file.txt";

    cout << "BEFORE: \n\n";
    read_file(file);

    cout << "\nAFTER: \n\n";

    fstream clearfile("new_file.txt", ios::out | ios::trunc);
    clearfile.close();

    read_file(file);
    return 0;
}
