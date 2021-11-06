#include<iostream>
#include"TriangleClass.h"
#include"QusitionbankClass.h"
int main()
{
	QusitionbankClass b;
	b.addqus(3, 2, 3, 1);
	b.addqus(3, 3, 3, 2);
	b.addqus(4, 2, 3, 3);
	b.addqus(1, 3, 3, 1);
	b.addqus(1, 2, 2, 2);
	b.addqus(2, 2, 3, 3);
	std::cout << "欢迎使用本系统,请选择服务类型" << std::endl;
	while (1)
	{
		std::cout << "-----------------------------------------------------------------------------------------------------------------------" << std::endl;
		std::cout << "输入 1 选择答题，输入 2 向题库添加题目，输入 3 删除题库中题目，输入 4 查询题目内容,输入 5 退出系统" << std::endl;
		int x;//存放用户选择
		std::cin >> x;
		if (x == 1)
		{
			std::cout << "请输入你要做的题目编号:" << std::endl;

			int num;
			std::string ans;
			std::cin >> num;
			b.search(num);
			std::cout << "请输入您的答案:" << std::endl;
			std::cin >> ans;
			if (b.work(num, ans)) {
				std::cout << "答题成功" << std::endl;
			}
			else {
				std::cout << "您输入的题目编号不合法" << std::endl;
			}

		}
		else if(x == 2)
		{
			b.addqus();
		}
		else if (x == 3)
		{
			b.delqus();
		}
		else if (x == 4)
		{
			std::cout << "请输入查询编号" << std::endl;
			int num;
			std::cin >> num;
			b.search(num);
		}
		else if (x == 5)
		{
			break;
		}
		else {
			std::cout << "您的输入不合法请重新输入" << std::endl;
		}
	}
	system("pause");
	return 0;
}
