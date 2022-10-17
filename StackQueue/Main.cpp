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

	cout << "���� ���(1) ť ���(2) ����(�ٸ� ����): ";
	cin >> input;
	cout << endl;

	switch (input) {
	case 1: //���� ��� ����
		stackFunc();
		break;
		//--------------------------------------------------------------------------------------------
	case 2: //ť ��� ����
		queueFunc();
		break;
		//--------------------------------------------------------------------------------------------
	default:
		cout << "���α׷� ����." << endl;
		break;
	}
}