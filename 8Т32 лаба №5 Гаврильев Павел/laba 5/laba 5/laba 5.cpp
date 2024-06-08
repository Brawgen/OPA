#include <iostream>
#include <chrono>
#include <thread>
#include <string>
#include <random>
#include <queue>

using namespace std; 

int main()
{
	bool k1 = false;
	bool k2 = false;
	bool k3 = false;
	setlocale(LC_ALL, "ru");
	int new_pokup = 0;
	std::random_device rd;//получение началоьного значения от аппаратного обеспечения
	std::mt19937 gen(rd());//создайте объект класса engine
	std::uniform_int_distribution<> digitdist(1, 33);//диапазон для чисел
	
	std::queue<int> queue;  // пустая очередь
	for (int i = 1; i <=10; i++) {
		queue.push(i);
	}
	if (queue.size() > 0 and queue.size() < 11) {
		k1 = true;
	}
	if (queue.size() > 10 and queue.size() < 21) {
		k1 = true;
		k2 = true;
	}
	if (queue.size() >30 and queue.size() < 21) {
		k1 = true;
		k2 = true;
		k3 = true;
	}
	cout << "___|";
	if (k1 == true and k2 == false) {
		for (int i = 1; i <= 10; i++) {
			cout<<queue.front();
			queue.pop();
		}
	}
}

//нужно создать еще очереди для каждой кассы и с основной очереди кидать на кассы потом выводить эту очередь потом крч
//  сделать функцию которая будет удалять с очередей касс покупателей и сделать вызов этой функции как рекурсия с условием пока в очереди люей нет


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