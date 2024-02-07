#include <bits/stdc++.h>

using namespace std;
int gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}
int find_x(int a, int b) {
     return a * b / gcd(a, b); 
}



int main() {
    int t;
    cin >> t;  

    for (int i = 0; i < t; ++i) {
        int a, b;
        cin >> a >> b;  
        int x = find_x(a, b);
        cout << x << endl;  
    }

    return 0;
}
