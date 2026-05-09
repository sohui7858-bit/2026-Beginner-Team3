#include <map>
#include <iostream>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    map <string, int> m;
    string name;
    int line = 1;

    while (true) {
        cin >> name;
        if (name == "end")
            break;
        m[name] = line;
        line++;
    }
    cout << m.size() << "\n";
    
    for (auto [k, v] : m)
        cout << k << " " << v << "\n";
}