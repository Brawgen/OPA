#include <iostream>
#include <string>
#include <random>
#include "work.h"

using namespace std;

int main()
{
	int front=0, rear=0;
	bool k1 = false;
	bool k2 = false;
	bool k3 = false;
	int size1 = 0;
	int size2 = 0;
	int size3 = 0;
	setlocale(LC_ALL, "ru");
	std::random_device rd;//получение началоьного значения от аппаратного обеспечения
	std::mt19937 gen(rd());//создайте объект класса engine
	std::uniform_int_distribution<> digitdist(1, 50);//диапазон для чисел
	int size = 34;
	rear = size;
	if (size > 0 and size < 16) {
		k1 = true;
		size1 = size;
		size2 = 0;
		size3 = 0;
	}
	if (size > 15 and size < 31) {
		k1 = true;
		k2 = true;
		size1 = size/2;
		if (size%2==0)
		{
			size2 = size / 2;
		}
		else {
			size2 = size / 2+1;
		}
		size3 = 0;
	}
	if (size > 30) {
		k1 = true;
		k2 = true;
		k3 = true;
		size1 = size / 3;
		size2 = size / 3;
		if (size % 3 == 0)
		{
			size3 = size / 3;
		}
		else {
			size3 = size / 3;
		}
	}
	int* mass = new int[size];
	int* mass1 = new int[size1];
	int* mass2 = new int[size2];
	int* mass3 = new int[size3];
	for (int i=0; i <size; i++) {
		mass[i] = i + 1;
	}
	while (mass[rear] - mass[front] != 0) {
		cout << "\x1B[2J\x1B[H";
		
		cout << "___| ";
		if (k1 == true and k2 == false and k3 == false) {
			for (int j = 0; j < size; j++) {
				mass1[j] = mass[j];
			}
		}
		if (k1 == true and k2 == true and k3 == false) {
			int l = 0;
			for (int j = 0; j < size; j++) {
				mass1[j] = mass[l];
				l++;
				if (l == size) {
					break;
				}
				mass2[j] = mass[l];
				l++;
				if (l == size) {
					break;
				}
			}
		}
		if (k1 == true and k2 == true and k3 == true) {
			int l = 0;
			for (int j = 0; j < size; j++) {
				mass1[j] = mass[l];
				l++;
				if (l == size) {
					break;
				}
				mass2[j] = mass[l];
				l++;
				if (l == size) {
					break;
				}
				mass3[j] = mass[l];
				l++;
				}
		}
			work(mass1, mass2, mass3, k1, k2, k3, size1,size2, size3);
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