//
//  week1-3.cpp
//  Algorithm
//
//  Created by 장보금 on 2018. 9. 2..
//  Copyright © 2018년 bogeum. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr)
{
    int n; // 입력하는 배열의 크기
    cout << "원소의 개수는? >> ";
    cin >> n;
    for(int i = 0; i < n; i++){
        int a; // 입력받는 원소
        cout << i+1 << "번째 >> ";
        cin >> a;
        if(a>=0 && a<=9){ // 원소의 크기가 0보다 크거나 같고 9보다 작거나 같은 정수
            arr.push_back(a);
        }
    }
    vector<int> answer;
    for(int i = 1; i <= arr.size(); i++){
        int temp = arr[i-1];
        if(temp != arr[i]){ // 중복 검사
            answer.push_back(temp); // 중복이 아니면 answer에 push
        }
    }
    cout<<"[";
    for(int i =0; i < answer.size();i++){
        cout << answer[i]<<", "; // answer 출력
    }
    cout<<"]";
    
    return answer;
}

int main(){
    vector<int> arr;
    solution(arr);
}
