#include <queue>
#include <iostream>
using namespace std;

struct Patient { // 구조체
    string name;
    int age;
    float blood;
};

struct cmp { // 비교구조체
    bool operator()(Patient a, Patient b) {
        if (a.blood == b.blood) 
            return a.age < b.age; // operator()가 true 리터하면 a가 뒤로 밀림. 
        return a.blood < b.blood; // 큰 쪽이 앞으로 
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    priority_queue<Patient, vector<Patient>, cmp> pq;
    int Q, age;
    string cmd, name;
    float blood; 
    cin >> Q;

    while(Q--) {
        cin >> cmd; //cmd 읽고
        if (cmd == "push") { 
            cin >> name >> age >> blood; // push면, name, age, blood 입력 받기
            pq.push({name, age, blood});
        }
        else if (cmd == "pop"){
            if(!pq.empty()){ // 비어있는지 확인 안 하면 에러
                cout << pq.top().name << "\n"; 
                pq.pop();
            }
        }
    }

}