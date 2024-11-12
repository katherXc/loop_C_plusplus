#include <iostream>
using namespace std;

int main() {
	int month;
	cout << "輸入月份 (1月到12月)";
	cin >> month;

	if (month >= 3 && month <= 5) {
		cout << "美好的春天";
	}
	else if (month >= 6 && month <= 8) {
		cout << "炎熱的夏天";
	}
	else if (month >= 9 && month <= 11) {
		cout << "涼爽的秋天";
	}
	else if (month == 12 || month == 2 || month == 1) {
		cout << "寒冷的冬天";
	}
}