#include "ring.h"
#include "jose.h"
#include <iostream>
#include <cstdlib>

using namespace std;

void Jose::initial() {
	int num, begin, m;
	cout << "�����뺢�ӵĸ�������ʼλ�ã�ÿ��Ҫ���ĸ�����\n";
	cin >> num >> begin >> m;
	if (num < 2 || begin < 0 || m<1 || m>num) {
		cerr << "������Ч";
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
	cout << "\nʤ��Ϊ��";
	x.putBoy(0);
	cout << "\n";
}
