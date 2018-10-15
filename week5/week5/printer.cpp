//
//  printer.cpp
//  week5
//
//  Created by 장보금 on 2018. 10. 8..
//  Copyright © 2018년 bogeum. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <utility>

using namespace std;

/* 실패 */
//int solution(vector<int> priorities, int location) {
//    int index = 1;
//    int m_index = 0;
//
//    for(int i = 1; i < priorities.size(); i++){
//        if(priorities[i] > priorities[m_index]) m_index = i;
//        //if(i==m_index) break;
//
//    }
//    if(location != m_index) index += (priorities.size() - m_index + location);
//    //cout<<index<<endl;
//
//    return index;
//}

/* 실패 */
//int solution(deque<int> priorities, int location) {
//
//    int num = priorities[location];
//
//    while(priorities.size() > 0){
//        if(priorities.front() > num) break;
//        else {priorities.pop_front(); location--;}
//    }
//
//    location -= (priorities.size());
//    cout<<location<<endl;
//    return location;
//}

/* 실패 */
//int solution(vector<int> priorities, int location) {
//    int answer = 0;
//    queue<pair<int, int>> p_queue;
//    for(int i = 0; i < priorities.size(); i++)
//        p_queue.push(pair<int, int>(priorities[i], i));
//    while(!p_queue.empty()){
//        cout<<"top : "<<p_queue.front().first<<"\t index : "<<p_queue.front().second<<endl;
//        if(p_queue.front().second == location){ answer++; break; }
//        else { p_queue.pop(); answer++;}
//    }
//
//    cout<< "answer : "<<answer <<endl;
//    return answer;
//}

int solution(vector<int> priorities, int location) {
    int cnt = 0;
    
        queue <pair<int, int>> q;
        priority_queue <int> pq;
        
        for (int i = 0; i < priorities.size(); i++)
        {
            int a = priorities[i];
            q.push({i,a});
            pq.push(a);
        }
        
        while (!q.empty())
        {
            //현재 배열의 인덱스와 중요도
            int nowidx = q.front().first;
            int nowval = q.front().second;
            q.pop();
            
            if (pq.top() == nowval)
            {
                pq.pop();
                cnt++;
                if (nowidx == location)
                {
                    //cout<< cnt <<endl;
                    break;
                }
            }
            else {
                q.push({ nowidx,nowval });
            }
        }
    
    cout<<cnt<<endl;
    return cnt;
}


//int main(){
//    vector<int> num;
//    //1, 1, 9, 1, 1, 1
//    // 2, 1, 3, 2
////    num.push_back(1);
////    num.push_back(1);
////    num.push_back(9);
////    num.push_back(1);
////    num.push_back(1);
////    num.push_back(1);
//
//    num.push_back(2);
//    num.push_back(1);
//    num.push_back(3);
//    num.push_back(2);
//
//    solution(num, 2);
//}
