#include <set>
#include <iostream>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    set<int> s;
    int Q;
    char cmd; int x;
    cin >> Q;

    while (Q--) {
        cin >> cmd >> x;
        if (cmd == 'i')
            s.insert(x);
        else if (cmd == 'r')
            s.erase(x);
    }

    for (auto i : s){
        cout << i << ' ';
    }
 
}