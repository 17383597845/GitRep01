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
	std::cout << "��ӭʹ�ñ�ϵͳ,��ѡ���������" << std::endl;
	while (1)
	{
		std::cout << "-----------------------------------------------------------------------------------------------------------------------" << std::endl;
		std::cout << "���� 1 ѡ����⣬���� 2 ����������Ŀ������ 3 ɾ���������Ŀ������ 4 ��ѯ��Ŀ����,���� 5 �˳�ϵͳ" << std::endl;
		int x;//����û�ѡ��
		std::cin >> x;
		if (x == 1)
		{
			std::cout << "��������Ҫ������Ŀ���:" << std::endl;

			int num;
			std::string ans;
			std::cin >> num;
			b.search(num);
			std::cout << "���������Ĵ�:" << std::endl;
			std::cin >> ans;
			if (b.work(num, ans)) {
				std::cout << "����ɹ�" << std::endl;
			}
			else {
				std::cout << "���������Ŀ��Ų��Ϸ�" << std::endl;
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
			std::cout << "�������ѯ���" << std::endl;
			int num;
			std::cin >> num;
			b.search(num);
		}
		else if (x == 5)
		{
			break;
		}
		else {
			std::cout << "�������벻�Ϸ�����������" << std::endl;
		}
	}
	system("pause");
	return 0;
}
