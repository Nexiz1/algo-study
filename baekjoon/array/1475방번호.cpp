#include <iostream>
#include <string>

int main()
{
	std::string str1;
	int arr[11] = { 0, };
	int A;

	std::cin >> str1;

	int len = str1.length();

	for (int i = 0;i < len;i++) {
		A = (int)str1[i] - 48;
		arr[A]++;
	}

	arr[6] = (arr[6] + arr[9] + 1) / 2;
	arr[9] = 0;

	int max = 0;
	for (int i = 0;i < 10;i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}

	std::cout << max;

	return 0;
}