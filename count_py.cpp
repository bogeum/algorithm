//
//  count_py.cpp
//  week3
//
//  Created by 장보금 on 2018. 9. 12..
//  Copyright © 2018년 bogeum. All rights reserved.
//

#include <string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    int p = 0, y = 0;
    
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'p' || s[i] == 'P') p++;
        else if(s[i] == 'y' || s[i] == 'Y') y++;
    }
    
    if(p!=y) answer = false;
    //cout << p << '\t' << y << endl;
    
    return answer;
}
//
//int main(){
//    string s = "Pyy";
//
//    cout<< solution(s)<<endl;
//}
