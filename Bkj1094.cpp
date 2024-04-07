#include <iostream>


/// <summary>
/// 백준 문제 1094
/// 
/// 문제에는 64센치의 막대를 몇번이든 나누어서 해당 길이에 맞는 막대를 맞추는 것이다.
/// 처음에는 막대를 나누는 횟수에 답이 있나 싶었지만, 횟수에 오류가 생기고 
/// 재귀로 처리할 시 처리해야할 막대의 갯수와 길이의 합에 대한 연산이 어지러워진다.
/// 
/// 하지만 다시 생각해보면 64라는 값을 나누어서 입력된 길이로 만들어야한다는 것이고
/// 주어진 조건과 64라는 수를 생각해보다보니 2진수로 이를 계산할 수 있다는 생각에 도달했다.
/// 반을 나눠 나머지를 버리고 그밑의 수로 넘어가서 같은 연산을 진행한다.
/// 이는 우리가 2진수로 수를 표현할 때와 유사하다.
/// 
///  2진수도 수를 표현할때 수에 가장 근접한 수를 1로 두고 밑의 수를 계속 더해서 접근한다. 
/// 그리고 다시 생각해보면 중요한건 64를 얼마나 나누는것 보다 입력된 수가 몇 개의 
/// 막대를 가지냐는 거고 2진수로 표현하면 몇개의 1을 가지냐고 표현할 수 있다.
/// 
/// 아래 코드는 입력된 수와 1을 비트연산을 해서 참일 경우 1을 더하고, 입력된 값의 비트를
/// 1 비트 만큼 왼쪽으로 밀면서 1의 갯수를 파악한다.
/// </summary>
int bk1094() //main 변환
{
	
	int input = 0;
	int count = 0;

	std::cin >> input;	
	for (int i = 0; i < 7 ; ++i) 
	{
		count += (input & 1);
		input >>= 1;
	}
	std::cout << count << std::endl;	


	return 0;
}
