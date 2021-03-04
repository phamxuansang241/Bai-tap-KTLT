// Read a file
#include<bits/stdc++.h>

using namespace std;

int main() {
    ofstream myfile("new_file.txt");

    myfile << "Hello. What suppp bro.\n";
    myfile << "Bye. Bro.\n";
    myfile.close();
    return 0;
}
