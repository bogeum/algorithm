//
//  week1-1.cpp
//  Algorithm
//
//  Created by 장보금 on 2018. 9. 2..
//  Copyright © 2018년 bogeum. All rights reserved.
//
#include <iostream>
#include <string>

using namespace std;

string solution(int a, int b){
    int days[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // 각 월에 며칠씩 있는지
    string answer[7] = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"}; // 1월 1일은 금요일 (금요일부터 시작)
    int sum = 0;
    
    for(int i=0;i<a-1;i++){ // 해당하는 달의 날짜들을 포함하지 않아야하므로 a-1
        sum += days[i];
    }
    return answer[(sum+b-1)%7]; // 해당하는 일을 가리키기 위해 b-1
}

/*
int main(int argc, const char * argv[]) {
    
    int a, b;
    cout << "a월 b일을 입력하세요 \na b : ";
    cin >> a >> b;
    
    cout << solution(a, b)<<'\n';
}
 */

