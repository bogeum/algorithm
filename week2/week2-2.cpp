//
//  week2-2.cpp
//  Algorithm
//
//  Created by 장보금 on 2018. 9. 8..
//  Copyright © 2018년 bogeum. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    
    int max = a>b? a : b; // 큰 수 구하기
    int min = a<b? a : b; // 작은 수 구하기
    for(int i = min; i <= max; i++){
        answer+=i;
    }
    
    return answer;
}


int main(){
    int a, b;
    cin>>a>>b;
    
    cout<< solution(a, b)<<endl;
}
 
 
