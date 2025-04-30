#include<iostream>
#include<Windows.h>
#include<string>
using namespace std;

void clearBuff() {
	char tmp;
	while (tmp = getchar() != '\n');
}
int main() {
	string s;
	int count=0;
	int len=0;

	cout << "请您输入多行" << endl;
	while (1)
	{
		if ((bool)getline(cin, s)==0){
			break;
		}
		count++;
		len += s.length();

	}
	cout <<"count is"<< count <<" len is"<< len << endl;
	
	system("pause");

	return 0;
}