//
//  sort_desc.cpp
//  week3
//
//  Created by 장보금 on 2018. 9. 14..
//  Copyright © 2018년 bogeum. All rights reserved.
//

#include <iostream>
#include <string>
//#include <algorithm>

using namespace std;

bool desc(string a, string b){
    return a > b;
}

string solution(string s) {
    string answer = "";
//    string cap;
//    string sml;
//    for(int i = 0; i < s.size(); i++){
//        if((s[i]-'Z')<0) // 대문자
//            cap+=s[i];
//        else
//            sml+=s[i];
//    }
//    sort(cap[0],cap[cap.size()], desc);
//    sort(sml[0],sml[sml.size()], desc);
//
//    answer = cap + sml;
    
    //sort(s[0], s[n], desc);
    
    for(int j = 0; j < s.size(); j++){
        for(int i = 0; i < s.size()-1; i++)
            if(s[i] < s[i+1]){
                char temp = s[i];
                s[i] = s[i+1];
                s[i+1] = temp;
            }
    }
    
    return s;
}
//
//int main(){
//    string s = "Zbcdefg";
//    
//    cout << solution(s) << endl;
//    return 0;
//}
