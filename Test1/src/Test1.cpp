//============================================================================
// Name        : Test1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    vector <int> pos;
    vector <int> test[10];
    pos.push_back(10);
    pos.push_back(20);
    cout << pos[0] << endl; //10
    cout << pos[1] << endl; //20
    cout << "size of pos = " << pos.size() <<endl;
    test[1].push_back(20);
    test[1].push_back(200);
    test[2].push_back(120);
    cout << test[1][0] << endl; //20
    cout << test[1][1] << endl; //200
    cout << test[2][0] << endl; //120
//    cout << "test[1][0]" << endl;
//    cout << test[1][0] << endl; //20
//    cout << "test[1][1]" << endl;
//    cout << test[1][1] << endl; //200
//    cout << "test[2][0]" << endl;
//    cout << test[2][0] << endl; //120
    cout << "size of test[0] = " << test[0].size() << endl; //0
    cout << "size of test[1] = " << test[1].size() << endl; //2
    cout << "size of test[2] = " << test[2].size() << endl; //1
    cout << "size of test[3] = " << test[3].size() << endl; //0

return 0;
}
