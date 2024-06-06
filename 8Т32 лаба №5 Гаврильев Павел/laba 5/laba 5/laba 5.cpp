#include <iostream>
#include <chrono>
#include <thread>
#include <string>

using namespace std; 

int main()
{
	cout << "___|" << "**********\n";
	cout << "\n___|" << "*****";
	cout << "\x1B[2J\x1B[H";
	int a = 1;
	int i = 1;
	std::string stroka[]{"*"};
	while (true) {
		i++;
		std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		cout << "\x1B[2J\x1B[H";
		cout << "___|";
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << "\n___|";
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout<<"\n";
	}
	
	
}