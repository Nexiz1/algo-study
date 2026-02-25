#include <iostream>

struct link
{
	link* left;
	link* right;
	char data;
};

class linkedlist
{
public:
	linkedlist() {
		head = new link;
		tail = new link;

		head->left = nullptr;
		head->right = tail;

		tail->left = head;
		tail->right = nullptr;

		cursor = head;
	}

	void insert(char a) {
		link* newlink = new link;
		newlink->data = a;

		newlink->left = cursor;
		newlink->right = cursor->right;

		newlink->right->left = newlink;
		cursor->right = newlink;
		
		cursor = newlink;
	}

	void deletelink() {
		if (cursor == head) return;

		cursor->left->right = cursor->right;
		cursor->right->left = cursor->left;
		link* delink = cursor;
		cursor = cursor->left;
		delete delink;
	}

	void printlist() {
		link* temp = head->right;
		while (!(temp == tail)) {
			std::cout << temp->data;
			temp = temp->right;
		}
		std::cout << '\n';
	}

	void clearlist() {
		cursor = tail->left;
		while (!(cursor == head)) {
			deletelink();
		}
	}

	link* head;
	link* tail;
	link* cursor;

};

int main()
{
	std::ios::sync_with_stdio(0); 
	std::cin.tie(0);

	int N, len;
	std::string str1;
	linkedlist list1;

	std::cin >> N;

	for (int i = 0;i < N;i++) {
		
		std::cin >> str1;
		len = str1.length();
		for (int j = 0;j < len;j++) {
			if (str1[j] == '<') {
				if (list1.cursor == list1.head) {
				}
				else {
					list1.cursor = list1.cursor->left;
				}
			}
			else if (str1[j] == '>') {
				if (list1.cursor->right == list1.tail) {
					continue;
				}
				else {
					list1.cursor = list1.cursor->right;
				}
			}
			else if (str1[j] == '-') {
				list1.deletelink();
			}
			else {
				list1.insert(str1[j]);
			}
		}
		list1.printlist();
		list1.clearlist();
		str1.clear();
	}

	delete list1.head;
	delete list1.tail;

	return 0;
}