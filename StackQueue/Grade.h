#ifndef GRADE
#define GRADE

using namespace std;

class Grade {
private :
	string name;
	int score;
public :
	Grade(string name, int score);
	~Grade();
	string getName();
	int getScore();
};

#endif