// C++ ǥ�� console ���
#if 0

#include <iostream>

int main()
{
	for (int i = 0; i < 10; i++)
	{
		//std:endl -> ��¹��ۿ� ���� ����Ϳ� ����ϰ� ������
		//\n -> ��¹��ۿ� �װ� ������ -->> �ڵ� ���� �ð��� \n�� ����
		std::cout << i << " * " << i << " = " << i * i << " �Դϴ�\n";
	}
	return 0;
}

#endif

// Namespace�� :: ������
#if 0

#include <iostream>

int x, y;

// namespace�� �����ϸ� {}���δ� my�� ����
// �������� ������ global ����

namespace my
{
	int x, y;

	int func(int a, int b)
	{
		return a + b;
	}
}

namespace your
{
	int x, y;

	int func(int a, int b)
	{
		return a - b;
	}
}

int main()
{
	my::x = 10, my::y = 20;
	std::cout << my::func(my::x, my::y) << std::endl;
	x = 5, y = 10;
	your::x = 100, your::y = 200;
	//global x,y���� your func �Լ��� ���
	std::cout << your::func(x, y) << std::endl;

	return 0;
}

#endif

// using directive�� �̿��� namespace ���� ����
#if 0

#include <iostream>

namespace my
{
	int x, y;
	int func(int a, int b)
	{
		return a + b;
	}
}

namespace your
{
	int x, y;
	int func(int a, int b)
	{
		return a - b;
	}
}

int main()
{
	// using�� ����Ͽ� ���� my::x,y�� �������� �ʾƵ�
	// �Ʒ� x,y�� my������ �ִ� �����ΰ��� ��Ÿ��
	using namespace my;

	x = 10, y = 20;
	your::x = 100, your::y = 200;
	std::cout << func(x, y) << std::endl;

	return 0;
}

#endif

// using declarataion�� �̿��� namespace ���� ����
#if 0

#include <iostream>

namespace my
{
	int x, y;
	int func(int a, int b)
	{
		return a + b;
	}
}

namespace your
{
	int x, y;
	int func(int a, int b)
	{
		return a - b;
	}
}

int main()
{
	// Scope���� Ư�� identifier�� ����
	// global�� x�� y�� �־ namespace x,y�� �����Ͽ� �����
	using my::x;
	using my::y;

	my::x = 10, y = 20;
	std::cout << my::func(x, y) << std::endl;

	return 0;
}

#endif

// std�� �����ϱ� ���� using�� ���
#if 0

#include <cstdio>
//�Ʒ� ������ ��Ʈ
#include <iostream>
using namespace std;

int main()
{
	std::cout << "Hello 1\n";
	cout << "Hello 2" << endl;
	printf("Hello 3\n");
	std::printf("Hello 4\n");

	return 0;
}

#endif

// in/out manipulator
#if 0

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int a = 100;

	//����ǥ��, ������ȣ ǥ�� ���� �ɼ��� ������ ����� �ɼ��� ��� �����ȴ�.
	//a�� 16����, a�� 10����, a�� 8����
	cout << hex << a << " " << dec << a << " " << oct << a << endl;
	//showbase:����ǥ��(0x,0b..), uppercase:�ҹ���->�빮��
	cout << showbase << uppercase << hex << a << " " << dec << a << " " << oct << a << endl;
	//���ٿ��� ������ �ɼ��� 8���� ����̶� �̾����� ���
	cout << a << endl;
	//setw:����Ϸ��� �������� ĭ���� ����
	cout << setw(8) << dec << a << endl;
	//setfill:������ ĭ���� 8ĭ���� ������µ� ������� *�� ä���� ���
	cout << setw(8) << -100 << " " << setfill('*') << left << setw(8) << dec << a << endl;

	return 0;
}

#endif

// C++ ǥ�� console �Է�
#if 0

#include <iostream>
using namespace std;

int main()
{
	int x;

	cout << "���� �� �Է� ";
	cin >> x;
	cout << "�Է��� " << x << " �Դϴ�." << endl;

	cout << "16���� �� �Է� ";
	cin >> hex >> x;
	cout << "�Է��� " << x << " �Դϴ�." << endl;

	return 0;
}

#endif

// C++ ǥ�� console �Է� : ���� ���� �� �ޱ�
#if 0

#include <iostream>
using namespace std;

int main()
{
	int x, y, z;

	cout << "���� 3�� �Է�";
	cin >> x >> y >> z;
	cout << " x = " << x << " y = " << y << " z = " << z << endl;

	return 0;
}

#endif

// C++ ǥ�� console �Է� : ���ڿ� �Է� �ޱ�(���� ���� �ޱ�)
#if 0

#include <iostream>
using namespace std;

int main()
{
	double d;
	char s[20];
	
	cout << "�Ǽ� �� �Է� ";
	cin >> d;
	cout << d << endl;

	cout << "�� �ܾ� �Է�(Hello World)" << endl;
	cin >> s;
	cout << s << endl;

	return 0;
}

#endif

// C++ ǥ�� console �Է� : cin.getline���� ���ڿ� �Է� �ޱ�
#if 0

#include <iostream>
using namespace std;

int main()
{
	double d;
	char s[20];

	cout << "�Ǽ� �� �Է� ";
	cin >> d;
	cout << d << endl;

	cout << "�� �ܾ� �Է�(Hello World)" << endl;
	cin.getline(s,20);
	cout << s << endl;

	return 0;
}

#endif

// C++ ǥ�� console �Է� : cin.ignore()
#if 0

#include <iostream>
using namespace std;

int main()
{
	double d;
	char s[20];

	cout << "�Ǽ� �� �Է� ";
	cin >> d;
	cout << d << endl;
	
	cin.ignore();

	cout << "�� �ܾ� �Է�(Hello World)" << endl;
	cin.getline(s, 20);
	cout << s << endl;

	return 0;
}

#endif

// ��� ǥ��, ���� �ʱ�ȭ
#if 0

#include <iostream>
using namespace std;

struct st
{
	int a = -10;
	char b;
};

int main()
{
	int a = 0b1010;
	int b(20);
	int c{ 30 };

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	int d[2] = { 40,50 };
	int e[2]{ 60,70 };

	struct st f = { 80,'A' };
	st g{ 90,'B' };

	cout << d[1] << endl;
	cout << e[1] << endl;
	cout << f.a << endl;
	cout << g.b << endl;
}

#endif

// �Լ��� Default Parameter
#if 0

#include <iostream>
using namespace std;

//Default Parameter�� �Ϲ� Parameter �ڿ��� �� �� ����.
int f1(int a, int b = 10, int c = 20)
{
	return a + b + c;
}

//�Լ� ����� ���Ǹ� �и��� ���, ����ο��� default�� ���
int f2(int x, int y = 10, int z = 20);

int main()
{
	cout << f1(10, 100, 200) << endl;
	cout << f1(10, 100) << endl;
	cout << f1(10) << endl;

	cout << f2(10, 100, 200) << endl;
	cout << f2(10, 100) << endl;
	cout << f2(10) << endl;

	return 0;
}

int f2(int xx, int yy, int zz)
{
	return xx + yy + zz;
}

#endif

// �Լ� Overloading
#if 0

//���޵Ǵ� argument������ � �Լ��� ȣ������ ������
#include <iostream>
using namespace std;

int f(int a = 3)				//1
{
	return a * a;
}

int f(int x, int y)				//2
{
	return x * y;
}

void f(double x)				//3
{
	cout << x << endl;
}

double f(double x, double y)	//4
{
	return x + y;
}

int main()
{
	cout << f() << endl;			//1 argument�� ���� ���� ������ default parameter
	cout << f(10) << endl;			//1
	cout << f(10, 20) << endl;		//2
	f(3.14);						//3
	cout << f(3.14, 5.5) << endl;	//4
	//cout << f(3, 5.5) << endl; <- 3�� int�� ����ó����
	cout << f(3.0, 5.5) << endl;	//4

	return 0;
}

#endif

// Parameter Ÿ���� Template ����
#if 0

#include <iostream>
using namespace std;

template<typename T>
T f1(T x, T y)
{
	return x + y;
}

template<typename myT>
myT f2(myT x, int y)
{
	return x + y;
}

template<typename myT>
int f3(myT x, int y)
{
	return x + y;
}

int main()
{
	cout << f1(10, 20) << endl;
	cout << f1(3.14, 5.5) << endl;

	cout << f2<int>(10, 20) << endl;
	cout << f2<double>(3.14, 30) << endl;

	cout << f3<int>(10, 20) << endl;
	cout << f3<double>(3.14, 30) << endl;

	return 0;
}

#endif