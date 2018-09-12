//
//  test.cpp
//  week2
//
//  Created by 장보금 on 2018. 9. 9..
//  Copyright © 2018년 bogeum. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
    
    sort(strings.begin(), strings.end());
    
    for(int i = 0; i < strings.size(); i++){ // 아래 swap을 원소의 갯수만큼 반복해야하기 때문
        for(int j = 0; j < strings.size()-1; j++){ // 최대 swap 횟수(size()-1)
            if(strings[j][n] > strings[j+1][n]){
                string tmp = strings[j+1];
                strings[j+1] = strings[j];
                strings[j] = tmp; // swap(j, j+1)
            }
        }
    }
    
    
        for(int i = 0; i <= strings.size(); i++){
            cout<<strings[i]<<'\n';
        }
    return strings;
}

int main(){
    vector<string> s = {"abce", "abcd", "cdx", "bed", "cat", "sun", "abcc", "cuh"};
    int n = 1;
    
    solution(s, n);
    
    return 0;
}
