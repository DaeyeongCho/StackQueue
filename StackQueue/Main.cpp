#include <iostream>
#include <string>
#include <stack>
#include <queue>

#include "Grade.h"
#include "StackFunc.h"
#include "QueueFunc.h"

using namespace std;
using std::stack;
using std::queue;

int main() {
	int input;

	cout << "스택 모드(1) 큐 모드(2) 종료(다른 숫자): ";
	cin >> input;
	cout << endl;

	switch (input) {
	case 1: //스택 기능 영역
		stackFunc();
		break;
		//--------------------------------------------------------------------------------------------
	case 2: //큐 기능 영역
		queueFunc();
		break;
		//--------------------------------------------------------------------------------------------
	default:
		cout << "프로그램 종료." << endl;
		break;
	}
}