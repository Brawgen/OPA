#include <iostream>
#include <string>
#include <random>
#include <queue>
#include "work.h"

using namespace std; 

int main()
{
	bool k1 = false;
	bool k2 = false;
	bool k3 = false;
	int i = 1;
	setlocale(LC_ALL, "ru");
	int new_pokup = 0;
	std::random_device rd;//получение началоьного значения от аппаратного обеспечения
	std::mt19937 gen(rd());//создайте объект класса engine
	std::uniform_int_distribution<> digitdist(1, 50);//диапазон для чисел
	std::queue<int> queue;  // пустая очередь
	std::queue<int> queue1;//очередь кассы 1
	std::queue<int> queue2;//очередь кассы 2
	std::queue<int> queue3;//очередь кассы 3

	for (i; i <=digitdist(gen); i++) {
		queue.push(i);
	}
	while (queue.size() != 0) {
		std::cout << "\x1B[2J\x1B[H";
		if (queue.size() > 0 and queue.size() < 16) {
			k1 = true;
		}
		if (queue.size() > 15 and queue.size() < 31) {
			k1 = true;
			k2 = true;
		}
		if (queue.size() > 30) {
			k1 = true;
			k2 = true;
			k3 = true;
		}
		cout << "___| ";
		if (k1 == true and k2 == false and k3 == false) {
			while (queue.size() != 0) {
				queue1.push(queue.front());
				queue.pop();
			}
		}
		if (k1 == true and k2 == true and k3 == false) {
			while (queue.size() != 0) {
				queue1.push(queue.front());
				queue.pop();
				if (queue.size() != 0) {
					queue2.push(queue.front());
					queue.pop();
				}
			}
		}
		if (k1 == true and k2 == true and k3 == true) {
			while (queue.size() != 0) {
				queue1.push(queue.front());
				queue.pop();
				if (queue.size() != 0) {
					queue2.push(queue.front());
					queue.pop();
				}
				if (queue.size() != 0) {
					queue3.push(queue.front());
					queue.pop();
				}
			}
		}
		std::queue<int> queue12 = queue1;
		std::queue<int> queue22 = queue2;
		std::queue<int> queue32 = queue3;
		while (queue1.size() != 0) {
			cout << queue1.front() << " ";
			queue1.pop();
		}
		cout << "\n___| ";
		while (queue2.size() != 0 and k2 == true) {
			cout << queue2.front() << " ";
			queue2.pop();
		}
		cout << "\n___| ";
		while (queue3.size() != 0 and k3 == true) {
			cout << queue3.front() << " ";
			queue3.pop();
		}
		work(queue12, queue22, queue32, k1, k2, k3);
		for ( i; i <= digitdist(gen); i++) {
			queue.push(i);
		}
	}
}


//нужно создать еще очереди для каждой кассы и с основной очереди кидать на кассы потом выводить эту очередь потом крч
//  сделать функцию которая будет удалять с очередей касс покупателей и сделать вызов этой функции как рекурсия с условием пока в очереди люей нет
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