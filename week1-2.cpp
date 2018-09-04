//
//  week1-2.cpp
//  Algorithm
//
//  Created by 장보금 on 2018. 9. 2..
//  Copyright © 2018년 bogeum. All rights reserved.
//
#include <iostream>
#include <string>

using namespace std;

string solution(string s){
    cout << "s를 입력하세요 \ns >> ";
    cin >> s;
    
    char size = (int)s.length();
    string answer = "";
    
    int n = size/2; // 아스키 코드 값을 활용
        
    if((size % 2) == 0){
        answer += s[n-1];
    }
    answer += s[n];
    
    return answer;
}

/*
int main(int argc, const char * argv[]) {
    string s;

    cout << solution(s) <<'\n';
}
 */
