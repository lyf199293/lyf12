#include<iostream>
#include<Windows.h>
#include<string>
int main() {
	std::string  userName;
	std::string passwd;

	

	while (1) {
		system("cls");
		std::cout << "请输入用户名:" << std::endl;
		std::cin >> userName;
		std::cout << "请输入密码:" << std::endl;
		std::cin >> passwd;
		if (userName == "lyf"&&passwd == "123456") {
			std::cout << "恭喜您登录成功" << std::endl;
			break;

		}
		else {
			std::cout << "用户名或密码错误" << std::endl;
			system("pause");
		}

	}
	system("cls");
	std::cout << "1.网站404攻击" << std::endl;
	std::cout << "2.网站篡改攻击" << std::endl;
	std::cout << "3.网站攻击记录" << std::endl;
	std::cout << "4.DNS攻击" << std::endl;
	std::cout << "5.服务器重启攻击" << std::endl;

	system("pause");
	return 0;
}