#include<iostream>
using namespace std;
class Student {
private:
	int num;
	int score;
public:
	int ShowScore() {
		return score;
	}
	Student(int a,int b){
		num = a;
		score = b;
	}
};
int max(Student* ptr) {
	int m = 0;
	for (int i = 1; i <= 4; i++) {
		m=m > ptr->ShowScore()?m:ptr->ShowScore();
		ptr++;
	}
	return m;
}
int main() {
	Student stu[5] = {
		{1,78},{2,98},{3,92}, {4,79},{5,90}
	};
	cout << "The highest score: " << max(stu);
	return 0;
}