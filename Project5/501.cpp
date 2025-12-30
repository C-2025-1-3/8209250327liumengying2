#include<iostream>
using namespace std;
class Time {
private:
	int hour;
	int minute;
	int sec;
public:
	void SetTime(int m_hour,int m_minute,int m_sec) {
		hour = m_hour;
		minute = m_minute;
		sec = m_sec;
	}
	void ShowTime() {
		cout << "Time:" << hour << ":" << minute << ":" << sec;
	}
};
int main() {
	Time t1;
	t1.SetTime(1, 2, 3);
	t1.ShowTime();
	return 0;
}