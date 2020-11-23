#include <iostream>
#define max 100

using namespace std;

class Queue 
{
private:
    int item, i;
    int queue[max];
    int rear;
    int front;

public:

    Queue() 
    {
        rear = 0;
        front = 0;
    }

    void insert() {
        if (rear == max-1)                                                                         
            cout << "\nQueue Reached Max!";
        else {
            cout << "\nEnter The Value to be Insert : ";
            cin>>item;
            queue[rear++] = item;
        }
    }
                                                                                           
    void removeData() {
        if (front == rear)
            cout << "\nQueue is Empty!";
        else {
            cout << "Removed Value  :" << queue[front];
            front++;
        }
        
    }
    
    void print()
    {
        display();
    }

 protected:
    void display() 
    {
        for (i = front; i < rear; i++)
            cout << "\nPosition : " << i << " , Value  : " << queue[i];
    }
};

int main() 
{
    Queue obj;
    obj.insert();
    obj.insert();
    obj.insert();
    obj.removeData();
    obj.print();
    return 0;
}
