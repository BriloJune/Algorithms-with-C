#include <iostream> 

using namespace std;

int solution(int N) {
	int num = 0;
	int sum = 0;
	for (int i = 0; i <= N; i++) {
		sum = i;
		num = i;
		while (num != 0 && N >= sum) {
			sum += num % 10;
			num /= 10;
		}
		if (sum == N) {
			return i;
		}
	}
	return 0;
}

int main()
{
	int n;
	cin >> n;
	cout << solution(n);
}