//
//  triangle.cpp
//  code
//
//  Created by 김도현 on 2023/03/18.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    while (true) {
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0) break; // 입력 종료 조건
        int arr[3] = {a, b, c};
        sort(arr, arr + 3); // 세 변의 길이를 오름차순으로 정렬
        if (arr[2]*arr[2] == arr[0]*arr[0] + arr[1]*arr[1]) {
            cout << "right\n"; // 직각 삼각형인 경우
        } else {
            cout << "wrong\n"; // 직각 삼각형이 아닌 경우
        }
    }
    return 0;
}
