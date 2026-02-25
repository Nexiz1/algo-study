#include <iostream>
#include <string>

int main()
{
	std::string str1;
	std::string str2;

	std::cin >> str1 >> str2;

	int len1 = str1.length();
	int len2 = str2.length();

	int arr1[26] = { 0, };
	int arr2[26] = { 0, };


	for (int i = 0;i < len1;i++) {
		arr1[str1[i] - 'a']++;
	}
	
	for (int i = 0;i < len2;i++) {
		arr2[str2[i] - 'a']++;
	}

	int count = 0;

	for (int i = 0;i < 26;i++) {
		if (arr1[i] == arr2[i]) {
			continue;
		}
		else if (arr1[i] > arr2[i]) {
			count += arr1[i] - arr2[i];
		}
		else {
			count += arr2[i] - arr1[i];
		}
	}

	std::cout << count;


	return 0;
}