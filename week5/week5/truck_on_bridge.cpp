//
//  truck_on_bridge.cpp
//  week5
//
//  Created by 장보금 on 2018. 10. 7..
//  Copyright © 2018년 bogeum. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    queue<int> q;
    
    int sum = 0, time = 0;
    
    for(int i=0; i<truck_weights.size(); i++) {
        int d = truck_weights[i];
        
        while (true) {
            if (q.empty()) {
                q.push(d);
                time++;
                sum += d;
                break;
            }
            else if (q.size() == bridge_length) {
                sum -= q.front();
                q.pop();
            }
            else {
                if (sum + d > weight) {
                    q.push(0);
                    time++;
                }else {
                    q.push(d);
                    time++;
                    sum += d;
                    break;
                }
            }
        }
    }
    time += bridge_length;
    //cout<< time <<endl;
    return time;
}

//int main(){
//    solution(100, 100, {10});
//
//    return 0;
//}
