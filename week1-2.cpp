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
    char size = s.length();
    string answer;
    
    if(size>=0 && size<=100){
       // int n = size;// 아스키 코드 값을 활용
        if((size % 2) == 1){ // n이 홀수라면
            answer = s[size/2];
        }else{
            answer = s[size/2-1];
            answer += s[size/2];
        }
    }
    return answer;
}

/*
int main(int argc, const char * argv[]) {
    string s;
    cout << "길이가 1 이상, 100 이하인 s를 입력하세요 \ns >> ";
    cin >> s;
    
    cout << solution(s)<<'\n';
}
*/
