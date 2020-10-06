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
 	cout << " 名稱： " << role.name << endl;
 	cout << " 等級： " << role.level << endl;
	cout << " 血量： " << role.hp << endl;
	cout << " 能量： " << role.sp << endl;
	cout << " 物攻： " << role.ap << endl;
	cout << " 防禦力： " << role.dp << endl;
	 };	
void test_role()
{
	char name[] =" ★煞氣O安安★ ";
	
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
