#include <set>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    set <string> s1; 
    set <string> s2;
    string line1;
    string line2;


    getline(cin, line1);
    getline(cin, line2);

    istringstream iss1(line1);
    istringstream iss2(line2);
    string word;

    while (iss1 >> word) {
        s1.insert(word);
    }
    while (iss2 >> word) {
        s2.insert(word);
    }
    set<string> result;
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
        inserter(result, result.begin()));

    for (const auto& w : result) {
        cout << w << ' ';
    }

    return 0;
}