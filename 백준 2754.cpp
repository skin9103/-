#include<iostream>
#include<string>
using namespace std;

int main() {
    double score = 0.0;
    string str;
    cin >> str;
    cout.precision(1);
    cout << fixed;
    if (str == "F") { cout << 0.0; return 0; }
    if (str[0] == 'A') score += 4.0;
    if (str[0] == 'B') score += 3.0;
    if (str[0] == 'C') score += 2.0;
    if (str[0] == 'D') score += 1.0;
    if (str[1] == '+') score += 0.3;
    if (str[1] == '-') score -= 0.3;
    cout << score;
    return 0;
}
