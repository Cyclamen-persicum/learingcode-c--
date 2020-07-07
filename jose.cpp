#include "ring.h"
#include "jose.h"
#include <iostream>
#include <cstdlib>

using namespace std;

void Jose::initial() {
	int num, begin, m;
	cout << "请输入孩子的个数，起始位置，每次要数的个数：\n";
	cin >> num >> begin >> m;
	if (num < 2 || begin < 0 || m<1 || m>num) {
		cerr << "数据无效";
		exit(1);
	}
	numOfboys = num;
	beginPos = begin;
	interval = m;
}

void Jose::getWiner() {
	Ring x(numOfboys, beginPos);
	for (int i = 1; i < numOfboys; i++) {
		x.count(interval);
		x.putBoy(0);
		x.clearBoy();
	}
	x.count(1);
	cout << "\n胜者为：";
	x.putBoy(0);
	cout << "\n";
}
