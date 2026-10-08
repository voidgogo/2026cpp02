#include <iostream>
#include <string>
using namespace std;


class Student {
protected:
	string name;
public:
	Student(string name) : name(name){}
};
class DormitoryStudent : public Student {
public:
	int roomNumber;
	DormitoryStudent(string name, int roomNumber) : Student(name), roomNumber(roomNumber){}	

	void warn() { 
		cout << "기숙사생 이름 : " << name << '\n';
		cout << "기숙사 호실 : " << roomNumber << '\n';
		cout << "벌점부여!\n"; 
	}
};
class UndergraduateStudent : public Student {
public:
	int id;
	UndergraduateStudent(string name, int id) : Student(name), id(id){}

	void warn() { 
		cout << "학부생 이름 : " << name << '\n';
		cout << "학번 : " << id << '\n';
		cout << "학사경고!\n"; 
	}
};
class UndergraduateDormitoryStudent : public DormitoryStudent, public UndergraduateStudent {
public:
	UndergraduateDormitoryStudent(string name, int roomNumber, int id) : Student(name), DormitoryStudent(name, roomNumber), UndergraduateStudent(name, id) {}

	void warn() {
		cout << "학생 이름 : " << name << '\n';
		cout << "학번 : " << id << '\n';
		cout << "기숙사 호실 : " << roomNumber << '\n';
		cout << "경고!\n";
	}
};

int main()
{
	UndergraduateDormitoryStudent uds("DS Kim", 1013, 1234);
	uds.warn();
	return 0;
}
