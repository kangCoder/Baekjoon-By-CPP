#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore();
    for(int i = 0; i < T; i++) {
        string s;
        getline(cin, s);
        s += " ";
        
        stack<char> st;
        for (int j = 0; j < s.size(); j++) {
            if (s[j] == ' '){
                while (!st.empty()) {
                    cout << st.top();
                    st.pop();
                }
                cout << s[j];
            } else {
                st.push(s[j]);
            }
        }
        cout << endl;
    }
    return 0;
}
