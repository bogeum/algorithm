//
//  124_country.cpp
//  week4
//
//  Created by 장보금 on 2018. 10. 2..
//  Copyright © 2018년 bogeum. All rights reserved.
//

#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(int n) {
    string answer;
    int digit;
    
    while(n > 0){
        digit = n % 3;
        n = n / 3;
        if(digit == 0) {
            n = n - 1;
            digit = 4;
        }
        cout << digit << endl;
        answer += (char)digit;  // 않이 왜 answer에 안들어감?
    }
    
    return answer;
}

//int main(){
//    cout << solution(10) << endl;
//    return 0;
//}
