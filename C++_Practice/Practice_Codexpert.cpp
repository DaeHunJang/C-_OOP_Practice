//A0. 10���� ���� �Է� �޾� 16������ �μ��ϱ�
#if 0
// 32,767 ������ 10���� ������ �ϳ� �Է� �޾� 16���� ������ �μ��ϴ� �ڵ带 C++�� �ۼ��϶�
// ��, �μ��Ҷ� ���� ǥ��� 0X �� �ϸ� A ~F�� �빮�ڷ� ǥ�� �Ǿ�� �Ѵ�.

#include <iostream>
using namespace std;

int main()
{
	int num;
	
	cin >> num;
	
	cout << showbase << uppercase << hex << num << endl;

	return 0;
}

#endif

//A1.10���� 1��, 16���� 1�� ������ �Է¹޾� �հ踦 10������ �μ��ϱ�
#if 0
//10���� ���� 1���� 16���� ���� 1���� �������� �����Ͽ� �Է� �޾� �հ踦 �μ��ϴ� �ڵ带 �ۼ��϶�.

#include <iostream>
using namespace std;

int main()
{
	int num1, num2;

	cin >> dec >> num1;
	cin >> hex >> num2;
	//cin >> dec >> num1 >> hex >> num2;

	cout << dec << num1 + num2;

	return 0;
}

#endif

//A2.�ִ� 20���� ���ڿ� �Է� �޾Ƽ� ������ ���� �μ��ϱ�
#if 0
//�ִ� 20������ ���ڿ� �Է� �޾Ƽ� ù ���ڿ� ������ ���ڸ� �μ��ϴ� �ڵ带 �ۼ��϶�.
//��, �ԷµǴ� ���ڿ��� ������ �������� �ʴ´�.

#include <iostream>
using namespace std;

int main()
{
	char s[21];
	cin >> s;
	cout << s[0] << endl;
	cout << s[strlen(s)-1] << endl;
}

#endif
#if 0

#include <iostream>
using namespace std;

int main()
{
	char s[21];
	cin.getline(s, 21);
	cout << s[0] << endl;

	for (int i = 0; i < 21; i++)
	{
		if (s[i] == 0)
		{
			cout << s[i - 1];
			break;
		}
	}
}

#endif

//A3.���� 1���� �� �ܾ �Է� �޾Ƽ� 2��° �ܾ �Է� ���� ���� ��ŭ �μ��ϱ�
#if 0
//ù��° �ٿ� ����(n) �ϳ��� �Է� �޴´�.
//�ι�° �ٿ� ����(������ �ϳ��� ����)���� �и��� �ΰ��� �ܾ �Էµȴ�.
//�̶� �ι�° �ܾ n�ٿ� ���ļ� �μ��ϴ� �ڵ带 �����϶�.

#include<iostream>
using namespace std;

int main()
{
	int num;
	char s[20];

	cin >> num;
	cin >> s;
	cin >> s;
	for (int i = 0; i < num; i++)
	{
		cout << s << endl;
	}
}

#endif

//A4. ��ǰ �ǸŰ��� ���ϱ�
#if 0
//��ǰ���ݰ� ������(�Ǽ� r)�� ���� ������ ��ǰ���ݿ� �������� �ݿ��� ������ ��ȯ�ϴ� �Լ� compute_price�� �����϶�.
//�׷���, �������� �������� �ʴ� ���� �⺻ ������ 0.1�� �����Ͽ��� �Ѵ�.
//���� ���ø� �ڵ带 �̿��Ͽ� �����϶�.

#include <iostream>
using namespace std;

double compute_price(int price, double rate = 0.1)
{
	return price * (1 - rate);
}

int main()
{
	cout << compute_price(12000, 0.25) << endl;
	cout << compute_price(12000) << endl;
	cout << compute_price(32000, 0.1) << endl;

	return 0;
}

#endif

//A5. ������ Ÿ�Կ� ���� �ٸ��� �����ϴ� �Լ� �����
#if 0

//���޵� ���� ������ ��� ������ ����� ��ȯ�ϰ�
//���޵� ���� �Ǽ��� ���� ����ȭ(�ݿø�)�� ����� ��ȯ�ϰ�
//���޵� ���� ���� 1���� �Ǽ� 1���� ���� �� ���� ���� �Ǽ� Ÿ������ ��ȯ�ϴ� �Լ� func�� �����϶�

#include <iostream>
using namespace std;

int func(int num)
{
	return num * num;
}

int func(double num)
{
	return (int)(num + 0.5);
}

double func(int num1, double num2)
{
	return num1 + num2;
}

int main()
{
	cout << func(3) << endl;
	cout << func(3.49) << endl;
	cout << func(3.51) << endl;
	cout << func(10, 3.14) << endl;

	return 0;
}

#endif