//
//  areasum.cpp
//  code
//
//  Created by 김도현 on 2023/04/13.
//

#include <iostream>
using namespace std;
  
int main(void)
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    
    int num, count;
    cin >> num >> count;
    
    // 입력받으면서 누적합을 계산
    int sum = 0;
    int arr[num];
    for (int i = 0; i < num; i++) {
        int a;
        cin>>a;
        arr[i+1] = arr[i] + a;
    }
    
    
    
    // 구간 합 계산
    for (int i = 0; i < count; i++) {
        int x, y;
        cin >> x >> y;
        int result = arr[y] - arr[x-1];
        cout << result << '\n';
    }
        
    
    return 0;
}
