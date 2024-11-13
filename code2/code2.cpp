#include <iostream>
using namespace std;

int main()
{
    int n = 1;
    int sum = 0;
    cout << "請輸入一個正整數n: ";
    cin >> n;

    // for loop
    for (int i = 2; i <= n; i += 2) {
        sum += i;
    }
    cout << "For loop: 1~" << n << "之間所有偶數的和為: " << sum << endl;

    // while loop
    int i = 2;
    sum = 0;
    while (i <= n) {
        sum += i;
        i += 2;
    }
    cout << "While loop: 1~" << n << "之間所有偶數的和為: " << sum << endl;

    // do-while loop
    i = 2;
    sum = 0;
    do {
        if (i > n) break;
        sum += i;
        i += 2;
    } while (i <= n);
    cout << "Do-While loop: 1~" << n << "之間所有偶數的和為: " << sum << endl;

    return 0;
}