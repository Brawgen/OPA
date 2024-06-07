//#include <iostream>
//#include <chrono>
//#include <thread>
//#include <string>
//
//using namespace std; 
//
//int main()
//{
//	cout << "___|" << "**********\n";
//	cout << "\n___|" << "*****";
//	cout << "\x1B[2J\x1B[H";
//	int a = 1;
//	int i = 1;
//	std::string stroka[]{"*"};
//	while (true) {
//		i++;
//		std::this_thread::sleep_for(std::chrono::milliseconds(1000));
//		cout << "\x1B[2J\x1B[H";
//		cout << "___|";
//		for (int j = 1; j <= i; j++) {
//			cout << "*";
//		}
//		cout << "\n___|";
//		for (int j = 1; j <= i; j++)  {
//			cout << "*";
//		}
//		cout<<"\n";
//	}
//	
//	
//}

// Реализация очередей в C++

#include <iostream>
#define SIZE 5

using namespace std;

class Queue {
private:
    int items[SIZE], front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    bool isFull() {
        if (front == 0 && rear == SIZE - 1) {
            return true;
        }
        return false;
    }

    bool isEmpty() {
        if (front == -1)
            return true;
        else
            return false;
    }

    void enQueue(int element) {
        if (isFull()) {
            cout << "Очередь заполнена";
        }
        else {
            if (front == -1) front = 0;
            rear++;
            items[rear] = element;
            cout << endl
                << "Добавлено значение " << element << endl;
        }
    }

    int deQueue() {
        int element;
        if (isEmpty()) {
            cout << "Очередь пуста" << endl;
            return (-1);
        }
        else {
            element = items[front];
            if (front >= rear) {
                front = -1;
                rear = -1;
            } /* Внутри Q только один элемент, поэтому очередь сбрасывается
              в начальное состояние после удаления последнего элемента */
            else {
                front++;
            }
            cout << endl
                << "Удален элемент -> " << element << endl;
            return (element);
        }
    }

    void display() {
        /* Функция выводит в консоль элементы очереди */
        int i;
        if (isEmpty()) {
            cout << endl
                << "Пустая очередь" << endl;
        }
        else {
            cout << endl
                << "Индекс FRONT -> " << front;
            cout << endl
                << "Элементы -> ";
            for (i = front; i <= rear; i++)
                cout << items[i] << "  ";
            cout << endl
                << "Индекс REAR-> " << rear << endl;
        }
    }
};

int main() {
    setlocale(LC_ALL, "ru");
    Queue q;

    // функцию deQueue нельзя применять к пустой очереди
    q.deQueue();

    // Добавляем 5 элементов
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);

    // Шестой элемент добавить нельзя — очередь заполнена
    q.enQueue(6);

    q.display();

    // Функция deQueue удаляет первый элемент — 1
    q.deQueue();

    // Теперь внутри очереди 4 элемента
    q.display();

    return 0;
}