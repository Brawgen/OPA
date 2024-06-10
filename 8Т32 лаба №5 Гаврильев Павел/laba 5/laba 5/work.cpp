#include "work.h"

void work(std::queue<int> queue1, std::queue<int> queue2, std::queue<int> queue3, bool k1, bool k2, bool k3)
{
	std::this_thread::sleep_for(std::chrono::seconds(1));
	std::cout << "\x1B[2J\x1B[H";
	std::queue<int> queue12=queue1;
	std::queue<int> queue22=queue2;
	std::queue<int> queue32=queue3;
	if ((queue1.size()+ queue2.size() + queue3.size() )!=0 )
	{
		cout << "__" << queue12.front() << "| ";
		queue12.pop();
		queue1.pop();
		while (queue1.size() != 0 and k1==true) {
			cout << queue1.front() << " ";
			queue1.pop();
			
		}
		if (queue22.size()!=0){
			cout << "\n__" << queue22.front() << "| ";
			queue22.pop();
			queue2.pop();
			while (queue2.size() != 0 and k2 == true) {
				cout << queue2.front() << " ";
				queue2.pop();
			}
		}
		else { cout << "\n___|"; }
		if (queue32.size() != 0) {
			cout << "\n__" << queue32.front() << "| ";
			queue32.pop();
			queue3.pop();
			while (queue3.size() != 0 and k3 == true) {
				cout << queue3.front() << " ";
				queue3.pop();
			}
		}
		else { cout << "\n___|"; }
		work(queue12, queue22, queue32, k1, k2, k3);
	}
	else {
		cout << "___|";
		cout << "\n___|";
		cout << "\n___|";
	}
	}
	
	
