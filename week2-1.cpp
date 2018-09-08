//
//  week2-1.cpp
//  Algorithm
//
//  Created by 장보금 on 2018. 9. 5..
//  Copyright © 2018년 bogeum. All rights reserved.
//
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    
    for(int i = 0; i < arr.size(); i++){
        if((arr[i] % divisor) == 0) // divisor로 나누어 떨어지면
            answer.push_back(arr[i]); // answer에 push
    }
    
    sort(answer.begin(), answer.end()); // 오름차순으로 정렬
    
    if(answer.empty()){ // 비어있는지 확인
        answer.insert(answer.begin(), -1); // 비었다면 -1 삽입;
    }
    return answer;
}

int main(){
    vector<int> arr = {5, 9, 7, 10};
    int di = 5;
    solution(arr, di);

}
