#include <iostream>

int arr[2000001] = { 0, };

int main()
{
	int a, x, n, count = 0;

	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> x;
		arr[x]++;
	}

	std::cin >> x;

	for (int i = 1; i < x - i; i++)
	{
		if (arr[i] == 1 && arr[x - i] == 1) {
			count++;
		}
	}

	std::cout << count;

	return 0;
}