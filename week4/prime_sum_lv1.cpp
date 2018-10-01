//
//  prime_sum_lv1.cpp
//  week4
//
//  Created by 장보금 on 2018. 10. 2..
//  Copyright © 2018년 bogeum. All rights reserved.
//

#include <iostream>

using namespace std;

long long solution(int N) {
    long long sum = 0;
    
    for(int num = N; num > 1; num--){
        int i;
        for (i = 2; i < num; i++){ // 나누어 떨어지는 경우 소수가 아님
            if (num % i == 0) break;
        }
        // 끝까지 해서 나누어 떨어지지 않으면 소수임
        if (i == num) sum += num;
    }
    return sum;
}

int main(){
    cout<<solution(7)<<endl;
    return 0;
}
