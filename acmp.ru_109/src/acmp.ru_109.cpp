//============================================================================
// Name        : ru_109.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : C++, Ansi-style
//============================================================================

//#include <bits/stdc++.h>
#include <vector>
#include <queue>
#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream fin;
	ofstream fout;

	int a, b, o;
	char c;
	vector<int> vec;
	queue<int> que;


	fin.open("INPUT.TXT");
	fout.open("OUTPUT.TXT");
	fin >> a >> c >> b;

	if (a%b==0) {

		fout << a/b;

	} else {

		fout << a/b << ".";
		o=a%b;
		do {
			if (que.front()!=o) {
				que.push(o);
				vec.push_back(o*10/b);
			} else {
				que.pop();
			}
			a=o*10;
			o=a%b;
		} while((!que.empty())&&(o!=0));
		if (o!=0) {
			fout << "(";
			vector<int>::iterator it;
			for (it=vec.begin(); it!=vec.end(); it++) {
				fout << *it;
			}
			fout << ")";
		} else {
			vector<int>::iterator it;
			for (it=vec.begin(); it!=vec.end(); it++) {
				fout << *it;
			}
		}

	}

	fin.close();
	fout.close();
	return 0;
}
