// C++ 표준 console 출력
#if 0

#include <iostream>

int main()
{
	for (int i = 0; i < 10; i++)
	{
		//std:endl -> 출력버퍼에 값을 모니터에 출력하고 다음줄
		//\n -> 출력버퍼에 쌓고 다음줄 -->> 코드 실행 시간은 \n이 빠름
		std::cout << i << " * " << i << " = " << i * i << " 입니다\n";
	}
	return 0;
}

#endif

// Namespace와 :: 연산자
#if 0

#include <iostream>

int x, y;

// namespace를 지정하면 {}내부는 my의 영역
// 지정하지 않으면 global 영역

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
	//global x,y값을 your func 함수로 계산
	std::cout << your::func(x, y) << std::endl;

	return 0;
}

#endif

// using directive를 이용한 namespace 사전 지정
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
	// using을 사용하여 따로 my::x,y로 지정하지 않아도
	// 아래 x,y가 my영역에 있는 변수인것을 나타냄
	using namespace my;

	x = 10, y = 20;
	your::x = 100, your::y = 200;
	std::cout << func(x, y) << std::endl;

	return 0;
}

#endif

// using declarataion을 이용한 namespace 사전 지정
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
	// Scope내의 특정 identifier만 지정
	// global에 x와 y가 있어도 namespace x,y를 지정하여 사용함
	using my::x;
	using my::y;

	my::x = 10, y = 20;
	std::cout << my::func(x, y) << std::endl;

	return 0;
}

#endif

// std를 생략하기 위한 using의 사용
#if 0

#include <cstdio>
//아래 두줄은 세트
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

	//진법표시, 진법기호 표시 등의 옵션은 마지막 사용한 옵션이 계속 유지된다.
	//a의 16진수, a의 10진수, a의 8진수
	cout << hex << a << " " << dec << a << " " << oct << a << endl;
	//showbase:진법표시(0x,0b..), uppercase:소문자->대문자
	cout << showbase << uppercase << hex << a << " " << dec << a << " " << oct << a << endl;
	//윗줄에서 마지막 옵션이 8진수 출력이라 이어져서 출력
	cout << a << endl;
	//setw:출력하려는 데이터의 칸수를 지정
	cout << setw(8) << dec << a << endl;
	//setfill:데이터 칸수를 8칸으로 만들었는데 빈공간을 *로 채워서 출력
	cout << setw(8) << -100 << " " << setfill('*') << left << setw(8) << dec << a << endl;

	return 0;
}

#endif

// C++ 표준 console 입력
#if 0

#include <iostream>
using namespace std;

int main()
{
	int x;

	cout << "정수 값 입력 ";
	cin >> x;
	cout << "입력은 " << x << " 입니다." << endl;

	cout << "16진수 값 입력 ";
	cin >> hex >> x;
	cout << "입력은 " << x << " 입니다." << endl;

	return 0;
}

#endif

// C++ 표준 console 입력 : 여러 정수 값 받기
#if 0

#include <iostream>
using namespace std;

int main()
{
	int x, y, z;

	cout << "정수 3개 입력";
	cin >> x >> y >> z;
	cout << " x = " << x << " y = " << y << " z = " << z << endl;

	return 0;
}

#endif

// C++ 표준 console 입력 : 문자열 입력 받기(공백 포함 받기)
#if 0

#include <iostream>
using namespace std;

int main()
{
	double d;
	char s[20];
	
	cout << "실수 값 입력 ";
	cin >> d;
	cout << d << endl;

	cout << "두 단어 입력(Hello World)" << endl;
	cin >> s;
	cout << s << endl;

	return 0;
}

#endif

// C++ 표준 console 입력 : cin.getline으로 문자열 입력 받기
#if 0

#include <iostream>
using namespace std;

int main()
{
	double d;
	char s[20];

	cout << "실수 값 입력 ";
	cin >> d;
	cout << d << endl;

	cout << "두 단어 입력(Hello World)" << endl;
	cin.getline(s,20);
	cout << s << endl;

	return 0;
}

#endif

// C++ 표준 console 입력 : cin.ignore()
#if 0

#include <iostream>
using namespace std;

int main()
{
	double d;
	char s[20];

	cout << "실수 값 입력 ";
	cin >> d;
	cout << d << endl;
	
	cin.ignore();

	cout << "두 단어 입력(Hello World)" << endl;
	cin.getline(s, 20);
	cout << s << endl;

	return 0;
}

#endif

// 상수 표현, 변수 초기화
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

// 함수의 Default Parameter
#if 0

#include <iostream>
using namespace std;

//Default Parameter는 일반 Parameter 뒤에만 올 수 있음.
int f1(int a, int b = 10, int c = 20)
{
	return a + b + c;
}

//함수 선언과 정의를 분리한 경우, 선언부에만 default를 사용
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

// 함수 Overloading
#if 0

//전달되는 argument만으로 어떤 함수를 호출할지 결정됨
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
	cout << f() << endl;			//1 argument가 선언 되지 않으면 default parameter
	cout << f(10) << endl;			//1
	cout << f(10, 20) << endl;		//2
	f(3.14);						//3
	cout << f(3.14, 5.5) << endl;	//4
	//cout << f(3, 5.5) << endl; <- 3이 int라서 에러처리됨
	cout << f(3.0, 5.5) << endl;	//4

	return 0;
}

#endif

// Parameter 타입의 Template 지정
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