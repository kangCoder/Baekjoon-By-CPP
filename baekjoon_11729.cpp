#include <iostream>
using namespace std;

void Hanoi(int N, int x, int y, int z) {
    if (N == 1) {
        cout << x << " " << z << '\n';
    } else {
        Hanoi(N - 1, x, z, y);
        cout << x << " " << z << '\n';
        Hanoi(N - 1, y, x, z);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin >> N;
    
    cout << (1 << N) - 1 << '\n';
    Hanoi(N, 1, 2, 3);
    return 0;
}
