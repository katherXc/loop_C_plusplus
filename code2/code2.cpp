#include <iostream>
using namespace std;

int main()
{
    int n = 1;
    int sum = 0;
    cout << "請輸入一個正整數n: ";
    cin >> n;

    // 使用 for 迴圈
    sum = 0;
    for (int i = 2; i <= n; i += 2) {
        sum += i;
    }
    cout << "For 迴圈: 小於等於 " << n << " 的所有偶數和為: " << sum << endl;

    // 使用 while 迴圈
    int i = 2;
    sum = 0;
    while (i <= n) {
        sum += i;
        i += 2;
    }
    cout << "While 迴圈: 小於等於 " << n << " 的所有偶數和為: " << sum << endl;

    // 使用 do-while 迴圈
    i = 2;
    sum = 0;
    do {
        sum += i;
        i += 2;
    } while (i <= n);
    cout << "Do-While 迴圈: 小於等於 " << n << " 的所有偶數和為: " << sum << endl;

    return 0;
}