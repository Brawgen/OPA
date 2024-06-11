#include "work.h"

void work(int* mass1, int* mass2, int* mass3, int size1, int size2, int size3 )
{
	std::this_thread::sleep_for(std::chrono::seconds(1));
	std::cout << "\x1B[2J\x1B[H";
	if ((size1+size2+size3)!=0 )
	{
		cout << "__" << mass1[0] << "| ";
		for (int j = 1; j < size1; j++) {
			cout << mass1[j]<<" ";
		}
		if (size2!=0){
			cout << "\n__" << mass2[0] << "| ";
			for (int j = 1; j < size2; j++) {
				cout << mass2[j] << " ";
			}
		}
		else { cout << "\n___|"; }
		if (size3 != 0) {
			cout << "\n__" << mass3[0] << "| ";
			for (int j = 1; j < size3; j++) {
				cout << mass3[j] << " ";
			}
		}
		else { cout << "\n___|"; }
		int size11 = 0;
		int size21 = 0;
		int size31 = 0;
		if (size1!=0)
		{
			size11 = size1-1;
		}
		if (size2 != 0)
		{
			size21 = size2 - 1;
		}
		if (size3 != 0)
		{
			size31 = size3 - 1;
		}
		int* mass11 = new int[size11];
		int* mass21 = new int[size21];
		int* mass31 = new int[size31];
		
		for (int j = 0; j < size11; j++) {
			mass11[j] = mass1[j + 1];
		}
		for (int j = 0; j < size21; j++) {
			mass21[j] = mass2[j + 1];
		}
		for (int j = 0; j < size31; j++) {
			mass31[j] = mass3[j + 1];
		}
		work(mass11, mass21, mass31, size11, size21, size31);
		delete[] mass11;
		delete[] mass21;
		delete[] mass31;
	}
	else {
		cout << "___|";
		cout << "\n___|";
		cout << "\n___|";

	}
}
