//
//  bar_and_laser.cpp
//  week4
//
//  Created by 장보금 on 2018. 10. 2..
//  Copyright © 2018년 bogeum. All rights reserved.
//

#include <string>
#include <stack>

using namespace std;

int solution(string str) {
    stack<int> stk;
    int result = 0;
    
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '(')
            stk.push(1);
        else {
            stk.pop();
            if (str[i-1] == '(')
                result += stk.size();
            //레이저일 때, stack의 size만큼 더해줌
            else
                result++;
            //쇠막대기의 오른쪽 끝일 때, 1을 더해줌
        }
    }
    
    return result;
}
