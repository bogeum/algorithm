//
//  main.cpp
//  week5
//
//  Created by 장보금 on 2018. 10. 7..
//  Copyright © 2018년 bogeum. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

/* 효율성 불통 */
//vector<int> solution(vector<int> heights) {
//    vector<int> answer(heights.size(), 0); // 0으로 초기화된 원소 height.size()개를 가진 answer
//
//    int i = (int)heights.size()-1;
//
//    for(; i>0; i--){
//        for(int j = i; j > 0; j--){
//            if(heights[i]<heights[j]){
//                answer.at(i)=j+1;
//                break;
//            }
//        }
//        cout << answer[i] << endl;
//    }
//    return answer;
//}

vector<int> solution(vector<int> heights) {
    vector<int> answer(heights.size(), 0); // 0으로 초기화된 원소 height.size()개를 가진 answer
    
    int num = 0;
    int index = 0;
    
    for(int i = 1; i < heights.size(); i++){
        if(heights[i-1] > heights[i]){
            index = i;
            num = heights[i-1];
            answer.at(i) = index;
        }
        else{
            if(num < heights[i]) index = 0;
            answer.at(i) = index;
        }
    }
    return answer;
}

//int main(int argc, const char * argv[]) {
//    vector<int> num; //6,9,5,7,4
//    num.push_back(6);
//    num.push_back(9);
//    num.push_back(5);
//    num.push_back(7);
//    num.push_back(4);
//    //num.push_back(6);
//    //num.push_back(5);
//
//    solution(num);
//    return 0;
//}
