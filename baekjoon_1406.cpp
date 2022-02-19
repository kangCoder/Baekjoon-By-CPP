#include <iostream>
#include <string>
#include <list>
using namespace std;

int main() {
    string s;
    int M;
    cin >> s;
    cin >> M;
    
    list<char> edit(s.begin(), s.end());
    auto n = edit.end();
    while (M--) {
        char R;
        cin >> R;
        
        if (R == 'L'){
            if (n != edit.begin()) {
                n--;
            }
        } else if (R == 'D') {
            if (n != edit.end()) {
                n++;
            }
        } else if (R == 'P') {
            char v;
            cin >> v;
            edit.insert(n, v);
        } else if (R == 'B') {
            if (n != edit.begin()) {
                n--;
                n = edit.erase(n);
            }
        }
    }
    
    for (auto& a : edit) {
        cout << a;
    }
    cout << endl;
    return 0;
}
