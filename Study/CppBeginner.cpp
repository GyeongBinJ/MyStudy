#include <iostream>
using namespace std;
// 클래스 선언
class CppBeginner {
public:
	void hello() const {
		cout << "나의 첫 번째 C++ 프로그램" << endl;
	}
};

int main()
{
	CppBeginner me; // Cppbeginner 객체 정의
	me.hello(); // 객체에게 행위를 지시 (멤버함수 hello() 호출)
}

