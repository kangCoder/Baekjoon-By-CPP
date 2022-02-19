#include <iostream>
#include <queue>
using namespace std;

int main() {
    int K, N;
    cin >> N >> K;
    queue<int> q;
    
    for (int i = 1; i <= N; i++) {
        q.push(i);
    }
    
    cout << "<";
    int count = 1;
    while (!q.empty()) {
        if (count == K) {
            cout << q.front();
            q.pop();
            if (!q.empty()) cout << ", ";
            count = 1;
        } else {
            int tmp = q.front();
            q.pop();
            q.push(tmp);
            count++;
        }
    }
    cout << ">" << endl;
    
    return 0;
}
