#include<string>
#include<iostream>
using namespace std;

void draw_square(int num, char star,char empty) {
	string fristandlast(num, star);
	//frist line
	cout << fristandlast << endl;
	//between frist and last
	for (int i = 1; i < num-1; i++)
	{
		string between(num, empty);
		between[0] = star;
		between[num - 1] = star;

		cout << between << endl;
	}
	//last line
	cout << fristandlast << endl;
}

int main() {
	int number;
	cout << "Enter number : ";
	cin >> number;
	draw_square(number, '*', ' ');

	return 0;
}