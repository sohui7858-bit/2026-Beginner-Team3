#include <map>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string line;
    string word;
    map <string, int> m;

    while(true) {
        getline(cin, line);
        if (line == "END")  break;
        
        istringstream iss(line);
        while(iss >> word) 
            m[word]++;

        for (auto [k, v] : m)
            cout << k << " : " << v << "\n";

        m.clear();
    }
}