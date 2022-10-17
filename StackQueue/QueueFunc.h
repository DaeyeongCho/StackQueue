#ifndef QUEUE_FUNC
# define QUEUE_FUNC

void queueFunc() {
	bool escape = true;
	queue <Grade> gradeQueue;
	int input;
	string name;
	int score;

	cout << "**********ť ��� ����**********" << endl;

	while (escape) {
		cout << "Ǫ��(1) ��(2) ����Ʈ(3) ������(4) ����Ƽ(5) ����(�ٸ� ����): ";
		cin >> input;

		switch (input) {
		case 1: //push(e)
			cout << "�̸�, ���� �Է�: ";
			cin >> name >> score;
			gradeQueue.push(Grade(name, score));
			cout << endl;
			break;
			//-----------------------------------------------------------------------------------
		case 2: //pop()
			if (gradeQueue.empty() == true) {
				cout << "ť�� ����־� pop ��� ��� �Ұ�\n" << endl;
				break;
			}
			gradeQueue.pop();
			cout << "�� ��� ���� �Ϸ�\n" << endl;
			break;
			//-----------------------------------------------------------------------------------
		case 3: //front()
			if (gradeQueue.empty() == true) {
				cout << "ť�� ����־� top ��� ��� �Ұ�\n" << endl;
				break;
			}

			cout << "��� ���(1) �̸��� ���(2) ������ ���(3): ";
			cin >> input;

			switch (input)
			{
			case 1:
				cout << "�̸�: " << gradeQueue.front().getName() << "	����: " << gradeQueue.front().getScore() << "\n" << endl;
				break;
			case 2:
				cout << "�̸�: " << gradeQueue.front().getName() << "\n" << endl;
				break;
			case 3:
				cout << "����: " << gradeQueue.front().getScore() << "\n" << endl;
				break;
			default:
				cout << "�߸��� ���\n" << endl;
				break;
			}
			break;
			//-----------------------------------------------------------------------------------
		case 4: //sise()
			cout << gradeQueue.size() << "\n" << endl;
			break;
			//-----------------------------------------------------------------------------------
		case 5: //empty()
			cout << gradeQueue.empty() << "\n" << endl;
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