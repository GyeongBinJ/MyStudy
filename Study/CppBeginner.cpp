#include <iostream>
using namespace std;
// Ŭ���� ����
class CppBeginner {
public:
	void hello() const {
		cout << "���� ù ��° C++ ���α׷�" << endl;
	}
};

int main()
{
	CppBeginner me; // Cppbeginner ��ü ����
	me.hello(); // ��ü���� ������ ���� (����Լ� hello() ȣ��)
}

