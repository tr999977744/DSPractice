#include <iostream>

using namespace std;

struct Role
	{
	char *name;
	int level;
	int hp;
	int ap;
	int dp;
	int sp;
	};
void dump_role(Role& role) {
 	cout << " �W�١G " << role.name << endl;
 	cout << " ���šG " << role.level << endl;
	cout << " ��q�G " << role.hp << endl;
	cout << " ��q�G " << role.sp << endl;
	cout << " ����G " << role.ap << endl;
	cout << " ���m�O�G " << role.dp << endl;
	 };	
void test_role()
{
	char name[] =" ���ٮ�O�w�w�� ";
	
	struct Role role;
	role.name = name;
	role.level=1000;
	role.hp=10000;
	role.sp=10000;
	role.ap=10000;
	role.dp=10000;
	
	
	dump_role(role);
}
int main()
{
	test_role();
	return 0;
}
