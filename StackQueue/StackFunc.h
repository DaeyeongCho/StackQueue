#ifndef STACK_FUNC
# define STACK_FUNC

void stackFunc() {
	bool escape = true;
	stack <Grade> gradeStack;
	int input;
	string name;
	int score;

	cout << "**********스택 모드 진입**********" << endl;

	while (escape) {
		cout << "푸쉬(1) 팝(2) 탑(3) 사이즈(4) 엠프티(5) 종료(다른 숫자): ";
		cin >> input;

		switch (input) {
			case 1: //push(e)
				cout << "이름, 정수 입력: ";
				cin >> name >> score;
				gradeStack.push(Grade(name, score));
				cout << endl;
				break;
//-----------------------------------------------------------------------------------
			case 2: //pop()
				if (gradeStack.empty() == true) {
					cout << "스택이 비어있어 pop 명령 사용 불가\n" << endl;
					break;
				}
				gradeStack.pop();
				cout << "팝 명령 실행 완료\n" << endl;
				break;
//-----------------------------------------------------------------------------------
			case 3: //top()
				if (gradeStack.empty() == true) {
					cout << "스택이 비어있어 top 명령 사용 불가\n" << endl;
					break;
				}

				cout << "모두 출력(1) 이름만 출력(2) 점수만 출력(3): ";
				cin >> input;

				switch (input)
				{
				case 1:
					cout << "이름: " << gradeStack.top().getName() << "	점수: " << gradeStack.top().getScore() << "\n" << endl;
					break;
				case 2:
					cout << "이름: " << gradeStack.top().getName() <<  "\n" << endl;
					break;
				case 3:
					cout << "점수: " << gradeStack.top().getScore() << "\n" << endl;
					break;
				default:
					cout << "잘못된 출력\n" << endl;
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
			cout << "프로그램 종료" << endl;
			escape = false;
			break;
		}
	}
}

#endif