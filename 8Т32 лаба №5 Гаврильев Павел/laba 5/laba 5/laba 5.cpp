#include <iostream>
#include <chrono>
#include <thread>


using namespace std; 

int main()
{
	cout << "___|" << "**********\n";
	cout << "\n___|" << "*****";
	
	std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	cout << "\033[2J\033[1;1H";
	cout << "___|" << "*********\n";
	cout << "\n___|" << "****";
	std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	cout << "\033[2J\033[1;1H";
	cout << "___|" << "********\n";
	cout << "\n___|" << "***";
	
}