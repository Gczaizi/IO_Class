#include <iostream>

using namespace std;

int main()
{
	int ival;
	if (cin >> ival)			//cin读取字符会进入错误状态
		cout << "True" << endl;	//cin读取数字时正确
	return 0;
}