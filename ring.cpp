#include "ring.h"
#include <iostream>
#include <iomanip>

using namespace std;

Ring::Ring(int n, int beg) {
	pBegin = new Boy[n];
	pCurrent = pBegin;
	for (int i = 1; i <= n; i++) {
		pBegin[i - 1].next = pBegin + i % n;
		pBegin[i - 1].code = i;
		putBoy();
		pCurrent = pCurrent->next;
	}
	pCurrent = &pBegin[n + beg - 2];
}

void Ring::count(int m) {
	for (int i = 1; i < m; i++) {
		pivot = pCurrent;
		pCurrent = pCurrent->next;
	}
}

void Ring::putBoy(bool f) const {
	static int numInline;
	if (f) {
		numInline = 0;
		return;
	}
	if (numInline++ % 10 == 0) {
		cout << endl;
	}
	cout << setw(4) << pCurrent->code;
}

void Ring::clearBoy() {
	pivot->next = pCurrent->next;
}

void Ring::display() {
	for (Boy* pB = pCurrent; (pCurrent = pCurrent->next) != pB;) {
		putBoy(0);
	}
	putBoy(1);
}

Ring::~Ring() {
	delete[] pBegin;
}
