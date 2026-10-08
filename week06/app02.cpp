#include <iostream>
#include <string>
using namespace std;

class DormitoryStudent {
public:
	void warn() { cout << "벌점부여!\n"; }
};
class UndergraduateStudent {
public:
	void warn() { cout << "학사경고!\n"; }
};
class UndergraduateDormitoryStudent : public DormitoryStudent, public UndergraduateStudent {

};

int main()
{
	UndergraduateDormitoryStudent uds;
	uds.warn();
	return 0;
}
