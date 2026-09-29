//#include <stdio.h>
//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//using namespace std;
//
//void Start() {
//
//    int a;
//    do {
//        cout << "정수 입력 (-10 ~ 10) : ";
//        cin >> a;
//
//        if (a > 10 || a < -10) {
//            cout << "-10부터 10 사이의 값을 입력해주세요." << endl;
//        }
//    } while (a > 10 || a < -10);
//
//    int b = 0;
//    while (a > -15) {
//        b++;
//        a -= 5;
//    }
//    cout << "-5씩 연산한 정수의 값, 연산 횟수  : " << a << " , " << b << endl;
//
//    int num1, num2;
//
//    cout << "두 개의 정수 입력 : ";
//    cin >> num1 >> num2;
//
//    int minNum;
//    int maxNum;
//
//    if (num1 < num2)
//    {
//        minNum = num1;
//        maxNum = num2;
//    }
//    else
//    {
//        minNum = num2;
//        maxNum = num1;
//    }
//
//    int current = minNum;
//    int count = 0;
//    int sum = 0;
//
//    do
//    {
//        if (current % 3 == 0)
//        {
//            if (count > 0)
//            {
//                cout << ", ";
//            }
//
//            cout << current;
//
//            count++;
//            sum += current;
//        }
//
//        current++;
//
//    } while (current <= maxNum);
//
//    cout << endl;
//    cout << "총 갯수 : " << count
//        << " / 합 출력 : " << sum << endl;
//
//    cout << "출력할 구구단의 단 수 입력 : ";
//
//    int dan;
//    cin >> dan;
//    if (dan > 9 || dan < 2) return;
//
//    int sum_d = 0;
//    for (int i = 1; i < 10; i++) {
//        cout << dan << " X " << i << " = " << dan * i << endl;
//        sum_d += (dan * i);
//    }
//    cout << "단의 곱셉 결과의 합 : " << sum_d << endl;
//}
//
//int main() {
//    Start();
//    return 0;
//}
//
