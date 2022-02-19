#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    deque<int> dq;
    while (N--) {
        string s;
        cin >> s;
        if (s == "push_front") {
            int x;
            cin >> x;
            dq.push_front(x);
        } else if (s == "push_back") {
            int x;
            cin >> x;
            dq.push_back(x);
        } else if (s == "pop_front") {
            if (!dq.empty()) {
                cout << dq.front() << endl;
                dq.pop_front();
            } else {
                cout << -1 << endl;
            }
        } else if (s == "pop_back") {
            if (!dq.empty()) {
                cout << dq.back() << endl;
                dq.pop_back();
            } else {
                cout << -1 << endl;
            }
        } else if (s == "size") {
            cout << dq.size() << endl;
        } else if (s == "empty") {
            if (!dq.empty()) {
                cout << 0 << endl;
            } else{
                cout << 1 << endl;
            }
        } else if (s == "front") {
            if (!dq.empty()) {
                cout << dq.front() << endl;
            } else {
                cout << -1 << endl;
            }
        } else if (s == "back") {
            if (!dq.empty()) {
                cout << dq.back() << endl;
            } else {
                cout << -1 << endl;
            }
        }
    }
    return 0;
}
