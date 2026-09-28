//#include <stdio.h>
//#include <iostream>
//using namespace std;
//
//
//bool buyItem(int itemGold, int playerGold) {
//	if (itemGold > playerGold) return false;
//	else return true;
//}
//// Call by Value
//void Swap_V(int a, int b) {
//	int temp = a;
//	a = b;
//	b = temp;
//	cout << "[함수 내부 값] a : " << a << ", b : " << b << endl;
//}
//// Call by Reference
//void Swap_R(int& a, int& b) {
//	int temp = a;
//	a = b;
//	b = temp;
//	cout << "[함수 내부 값] a : " << a << ", b : " << b << endl;
//}
//
//void MingingGold(int& gold) {
//
//	if (gold >= 50) {
//		gold += 20;
//	}
//	else {
//		gold += 10;
//	}
//
//
//}
//
//void Start() {
//	int currentGold = 0;
//
//	cout << "골드 발굴 반복 횟수 입력 : ";
//	int amount;
//	cin >> amount;
//
//	for (int i = 0; i < amount; i++) {
//		MingingGold(currentGold);
//	}
//
//	cout << "당신의 최종 골드 : " << currentGold << endl;
//
//	cout << "================" << endl;
//
//	int a = 10;
//	int b = 20;
//
//	cout << "기존 a,b의 값 : " << a << " , " << b << endl;
//	cout << "Call By Value 스왑" << endl;
//	Swap_V(a, b);
//	cout << "[함수 외부 값] a : " << a << ", b : " << b << endl;
//
//	cout << "Call By Reference 스왑" << endl;
//	Swap_R(a, b);
//	cout << "[함수 외부 값] a : " << a << ", b : " << b << endl;
//
//	cout << "판매 아이템의 가격 : ";
//	int itemGold;
//	cin >> itemGold;
//
//	if (buyItem(itemGold, currentGold)) {
//		currentGold -= itemGold;
//		cout << "아이템 구매 성공" << endl;
//		cout << "남은 돈 : " << currentGold << endl;
//	}
//	else {
//		cout << "돈 부족으로 아이템 구매 실패";
//	}
//}
//
//
//int main() {
//	Start();
//	return 0;
//}
//
