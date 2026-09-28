//#include <stdio.h>
//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//using namespace std;
//enum WeaponType {
//	Sword,
//	Staff,
//	Axe,
//	Armor,
//	Ring
//};
//struct Item
//{
//	WeaponType type;
//	int value;
//	int sell;
//
//	Item(WeaponType Type, int Value, int Sell) {
//		type = Type;
//		value = Value;
//		sell = Sell;
//	}
//};
//void PrintItem(Item item) {
//	cout << "아이템 타입 : " << item.type << ", Value : " << item.value << ", 판매 가격 : " << item.sell << endl;
//}
//void InitItem() {
//	Item weapon1(WeaponType::Sword, 10, 100);
//	Item weapon2(WeaponType::Staff, 5, 50);
//	Item weapon3(WeaponType::Axe, 20, 300);
//	Item armor1(WeaponType::Armor, 15, 500);
//	Item armor2(WeaponType::Armor, 30, 750);
//	Item ring1(WeaponType::Ring, 3, 1000);
//
//	PrintItem(weapon1);
//	PrintItem(weapon2);
//	PrintItem(weapon3);
//	PrintItem(armor1);
//	PrintItem(armor2);
//	PrintItem(ring1);
//}
//void totalStats(int str, int dex, int luk) {
//	cout << "STR : " << str << endl;
//	cout << "DEX : " << dex << endl;
//	cout << "LUK : " << luk << endl;
//	cout << "총 스텟의 합 : " << str + dex + luk << endl;
//}
//void Start() {
//	srand(static_cast<unsigned int>(time(nullptr)));
//	int random1 = rand() % 5 + 1;
//	int random2 = rand() % 15 + 5;
//	int random3 = rand() % 50 + 150;
//
//	cout << "랜덤 출력 연습 : " << random1 << endl;
//	cout << "랜덤 출력 연습 : " << random2 << endl;
//	cout << "랜덤 출력 연습 : " << random3 << endl;
//
//	int amount;
//
//	do
//	{
//		cout << "내 소지금 입력 (100~200): ";
//		cin >> amount;
//
//		if (amount < 100 || amount > 200)
//		{
//			cout << "100부터 200 사이의 값을 입력해주세요.\n";
//		}
//
//	} while (amount < 100 || amount > 200);
//
//	int targetGold = rand() % 50 + 50;
//	cout << "현상금 : " << targetGold << endl;
//	int totalGold = (int)((amount + targetGold) * 0.9);
//	cout << "세금 낸 후 보유 금액 : " << totalGold << endl;
//
//	int str = rand() % 10 + 1;
//	int dex = rand() % 10 + 1;
//	int luk = rand() % 10 + 1;
//	totalStats(str, dex, luk);
//}
//
//int main() {
//	Start();
//	return 0;
//}
//
