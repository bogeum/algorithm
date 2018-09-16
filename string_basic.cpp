//
//  string_basic.cpp
//  week3
//
//  Created by 장보금 on 2018. 9. 16..
//  Copyright © 2018년 bogeum. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

bool solution(string s) {
    bool answer = false;
    int n = (int)s.size();
    
    if((n == 4) || (n == 6)){ // 길이가 4 또는 6이다
        for(int i = 0; i < s.size(); i++){
            if(s[i]>='0' && s[i]<='9'){// 숫자로만 구성되어있지 않다
                answer = true;
            }else{
                answer = false;
                break;
            }
        }
    }
    return answer;
}

//int main(){
//    string s = "a234";
//
//    cout<< solution(s) << endl;
//}
