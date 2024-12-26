//A0. 10진수 값을 입력 받아 16진수로 인쇄하기
#if 0
// 32,767 이하의 10진수 정수를 하나 입력 받아 16진수 값으로 인쇄하는 코드를 C++로 작성하라
// 단, 인쇄할때 진법 표기는 0X 로 하며 A ~F는 대문자로 표기 되어야 한다.

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

//A1.10진수 1개, 16진수 1개 정수를 입력받아 합계를 10진수로 인쇄하기
#if 0
//10진수 정수 1개와 16진수 정수 1개를 공백으로 구분하여 입력 받아 합계를 인쇄하는 코드를 작성하라.

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

//A2.최대 20글자 문자열 입력 받아서 마지막 글자 인쇄하기
#if 0
//최대 20글자의 문자열 입력 받아서 첫 글자와 마지막 글자를 인쇄하는 코드를 작성하라.
//단, 입력되는 문자열에 공백은 존재하지 않는다.

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

//A3.정수 1개와 두 단어를 입력 받아서 2번째 단어를 입력 받은 정수 만큼 인쇄하기
#if 0
//첫번째 줄에 정수(n) 하나를 입력 받는다.
//두번째 줄에 공백(공백은 하나만 존재)으로 분리된 두개의 단어가 입력된다.
//이때 두번째 단어를 n줄에 걸쳐서 인쇄하는 코드를 구현하라.

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

//A4. 제품 판매가격 구하기
#if 0
//제품가격과 할인율(실수 r)을 전달 받으면 제품가격에 할인율을 반영한 가격을 반환하는 함수 compute_price를 구현하라.
//그러나, 할인율을 전달하지 않는 경우는 기본 할인율 0.1을 적용하여야 한다.
//다음 템플릿 코드를 이용하여 설계하라.

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

//A5. 데이터 타입에 따라 다르게 동작하는 함수 만들기
#if 0

//전달된 값이 정수일 경우 제곱한 결과를 반환하고
//전달된 값이 실수일 경우는 정수화(반올림)한 결과를 반환하고
//전달된 값이 정수 1개와 실수 1개일 경우는 두 수의 합을 실수 타입으로 반환하는 함수 func를 구현하라

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