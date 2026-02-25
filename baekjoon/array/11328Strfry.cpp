#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	std::string str1;
	std::string str2;
	int N, len1, len2;
	int arr1[27] = { 0, };
	int arr2[27] = { 0, };

	std::cin >> N;

	for (int i = 0;i < N;i++) {
		str1.clear();
		str2.clear();
		std::fill(arr1, arr1 + 27, 0);
		std::fill(arr2, arr2 + 27, 0);

		std::cin >> str1 >> str2;

		len1 = str1.length();
		len2 = str2.length();

		for (int j = 0;j < len1;j++) {
			arr1[str1[j] - 'a']++;
		}
		for (int j = 0;j < len2;j++) {
			arr2[str2[j] - 'a']++;
		}

		for (int j = 0;j < 27;j++) {
			if (arr1[j] == arr2[j]) {
				if (j == 26) {
					std::cout << "Possible" << '\n';
				}
			}
			else {
				std::cout << "Impossible" << '\n';
				break;
			}
		}
	}
	
	return 0;
}