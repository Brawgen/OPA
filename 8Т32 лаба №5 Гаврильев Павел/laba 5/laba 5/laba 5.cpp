#include <iostream>
#include <chrono>
#include <thread>
#include <string>
#include <random>

using namespace std; 

int main()
{
	int new_pokup = 0;
	std::random_device rd;//получение началоьного значения от аппаратного обеспечения
	std::mt19937 gen(rd());//создайте объект класса engine
	std::uniform_int_distribution<> digitdist(0, 33);//диапазон для чисел
	

	cout << "___|";
	cout << "\n___|";
	cout << "\n___|";
	
	while (true) {
		int a1 = 0;
		int a2 = 0;
		int a3 = 0;
		new_pokup = digitdist(gen);
		int b = new_pokup;
		int i=0;
		std::this_thread::sleep_for(std::chrono::seconds(2));
		cout << "\x1B[2J\x1B[H";
		if (a1 < 10) {
			while (a1 <= 10 and new_pokup!=0) {
				a1++;
				new_pokup--;
			}
		}
		if (a2 < 10) {
			while (a2 <= 10 and new_pokup != 0) {
				a2++;
				new_pokup--;
			}
		}
		if (a3 < 30) {
			while (a3 <= 10 and new_pokup != 0) {
				a3++;
				new_pokup--;
			}
		}
		if (a1 != 0) {
			cout << "__*|";
			for (int j = 1; j <= a1; j++) {
				cout <<'*';
			}
		}
		else {
			cout << "___|";
		}
		if (a2 != 0) {
			cout << "\n__*|";
			for (int j = 1; j <= a2; j++) {
				cout << '*';
			}
		}
		else {
			cout << "\n___|";
		}
		if (a3 != 0) {
			cout << "\n__*|";
			for (int j = 1; j <= a3; j++) {
				cout << '*';
			}
		}
		else {
			cout << "\n___|";
		}
		for (int j = 1; j <= b; j++) {
			if (a1 != 0) {
				a1--;
			}
			if (a2 != 0) {
				a2--;
			}
			if (a3 != 0) {
				a3--;
			}
			std::this_thread::sleep_for(std::chrono::seconds(2));
			cout << "\x1B[2J\x1B[H";
			if (a1 != 0) {
				cout << "__*|";
				for (int k = 1; k <=a1; k++) {
					cout << '*';
				}
			}
			else {
				cout << "___|";
			}
			if (a2 != 0) {
				cout << "\n__*|";
				for (int k = 1; k <= a2; k++) {
					cout << '*';
				}
			}
			else {
				cout << "\n___|";
			}
			if (a3 != 0) {
				cout << "\n__*|";
				for (int k = 1; k <= a3; k++) {
					cout << '*';
				}
			}
			else {
				cout << "\n___|";
			}
		}
	}
}



// Реализация очередей в C++

//#include <iostream>
//#define SIZE 5
//
//using namespace std;
//
//class Queue {
//private:
//    int items[SIZE], front, rear;
//
//public:
//    Queue() {
//        front = -1;
//        rear = -1;
//    }
//
//    bool isFull() {
//        if (front == 0 && rear == SIZE - 1) {
//            return true;
//        }
//        return false;
//    }
//
//    bool isEmpty() {
//        if (front == -1)
//            return true;
//        else
//            return false;
//    }
//
//    void enQueue(int element) {
//        if (isFull()) {
//            cout << "Очередь заполнена";
//        }
//        else {
//            if (front == -1) front = 0;
//            rear++;
//            items[rear] = element;
//            cout << endl
//                << "Добавлено значение " << element << endl;
//        }
//    }
//
//    int deQueue() {
//        int element;
//        if (isEmpty()) {
//            cout << "Очередь пуста" << endl;
//            return (-1);
//        }
//        else {
//            element = items[front];
//            if (front >= rear) {
//                front = -1;
//                rear = -1;
//            } /* Внутри Q только один элемент, поэтому очередь сбрасывается
//              в начальное состояние после удаления последнего элемента */
//            else {
//                front++;
//            }
//            cout << endl
//                << "Удален элемент -> " << element << endl;
//            return (element);
//        }
//    }
//
//    void display() {
//        /* Функция выводит в консоль элементы очереди */
//        int i;
//        if (isEmpty()) {
//            cout << endl
//                << "Пустая очередь" << endl;
//        }
//        else {
//            cout << endl
//                << "Индекс FRONT -> " << front;
//            cout << endl
//                << "Элементы -> ";
//            for (i = front; i <= rear; i++)
//                cout << items[i] << "  ";
//            cout << endl
//                << "Индекс REAR-> " << rear << endl;
//        }
//    }
//};
//
//int main() {
//    setlocale(LC_ALL, "ru");
//    Queue q;
//
//    // функцию deQueue нельзя применять к пустой очереди
//    q.deQueue();
//
//    // Добавляем 5 элементов
//    q.enQueue(1);
//    q.enQueue(2);
//    q.enQueue(3);
//    q.enQueue(4);
//    q.enQueue(5);
//
//    // Шестой элемент добавить нельзя — очередь заполнена
//    q.enQueue(6);
//
//    q.display();
//
//    // Функция deQueue удаляет первый элемент — 1
//    q.deQueue();
//
//    // Теперь внутри очереди 4 элемента
//    q.display();
//
//    return 0;
//}