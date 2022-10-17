#ifndef STACK_FUNC
# define STACK_FUNC

void stackFunc() {
	bool escape = true;
	stack <Grade> gradeStack;
	int input;
	string name;
	int score;

	cout << "**********���� ��� ����**********" << endl;

	while (escape) {
		cout << "Ǫ��(1) ��(2) ž(3) ������(4) ����Ƽ(5) ����(�ٸ� ����): ";
		cin >> input;

		switch (input) {
			case 1: //push(e)
				cout << "�̸�, ���� �Է�: ";
				cin >> name >> score;
				gradeStack.push(Grade(name, score));
				cout << endl;
				break;
//-----------------------------------------------------------------------------------
			case 2: //pop()
				if (gradeStack.empty() == true) {
					cout << "������ ����־� pop ��� ��� �Ұ�\n" << endl;
					break;
				}
				gradeStack.pop();
				cout << "�� ��� ���� �Ϸ�\n" << endl;
				break;
//-----------------------------------------------------------------------------------
			case 3: //top()
				if (gradeStack.empty() == true) {
					cout << "������ ����־� top ��� ��� �Ұ�\n" << endl;
					break;
				}

				cout << "��� ���(1) �̸��� ���(2) ������ ���(3): ";
				cin >> input;

				switch (input)
				{
				case 1:
					cout << "�̸�: " << gradeStack.top().getName() << "	����: " << gradeStack.top().getScore() << "\n" << endl;
					break;
				case 2:
					cout << "�̸�: " << gradeStack.top().getName() <<  "\n" << endl;
					break;
				case 3:
					cout << "����: " << gradeStack.top().getScore() << "\n" << endl;
					break;
				default:
					cout << "�߸��� ���\n" << endl;
					break;
				}
				break;
//-----------------------------------------------------------------------------------
			case 4: //sise()
				cout << gradeStack.size() << "\n" << endl;
				break;
//-----------------------------------------------------------------------------------
			case 5: //empty()
				cout << gradeStack.empty() << "\n" << endl;
				break;
//-----------------------------------------------------------------------------------
		default:
			cout << "���α׷� ����" << endl;
			escape = false;
			break;
		}
	}
}

#endif