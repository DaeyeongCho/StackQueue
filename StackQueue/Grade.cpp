#include <iostream>
#include <string>

#include "Grade.h"

using namespace std;

Grade::Grade(string name, int score) {
	this->name = name;
	this->score = score;
}

Grade::~Grade() {

}

string Grade::getName() {
	return name;
}

int Grade::getScore() {
	return score;
}