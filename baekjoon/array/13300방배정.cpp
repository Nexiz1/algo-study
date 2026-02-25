#include <iostream>

int main()
{
	int N, K, S, Y, count = 0;
	int arr1[7] = { 0, };
	int arr2[7] = { 0, };

	std::cin >> N >> K;
	for (int i = 0; i < N; i++)
	{
		std::cin >> S >> Y;
		if (S == 0) {
			arr2[Y]++;
		}
		else {
			arr1[Y]++;
		}
	}
	for (int i = 1;i < 7;i++) {
		if (arr1[i] % K == 0) {
			count += arr1[i] / K;
		}
		else {
			count += arr1[i] / K + 1;
		}

		if (arr2[i] % K == 0) {
			count += arr2[i] / K;
		}
		else {
			count += arr2[i] / K + 1;
		}
	}

	std::cout << count;

	return 0;
}