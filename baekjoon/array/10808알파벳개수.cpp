#include <iostream>
#include <string>

int main()
{
	std::string str1;

	std::cin >> str1;

	int len = str1.length();
	
	int arr[26] = { 0, };


	for (int i = 0;i < len;i++) {
		arr[str1[i] - 'a']++;
	}

	for (int i = 0;i < 26;i++) {
		std::cout << arr[i] << ' ';
	}



	return 0;
}