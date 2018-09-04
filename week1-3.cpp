//
//  week1-3.cpp
//  Algorithm
//
//  Created by 장보금 on 2018. 9. 2..
//  Copyright © 2018년 bogeum. All rights reserved.
//

#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    
    for(int i = 1; i <= arr.size(); i++){
        if(arr[i-1] != arr[i]){ // 중복 검사
            answer.push_back(arr[i-1]); // 중복이 아니면 answer에 push
        }
    }
    return answer;
}

/*
int main(){
    vector<int> arr;
    solution(arr);
}
*/
