#include <iostream>
using namespace std;
#include"Header.h";
int main()
{
    Queue_Array q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    int x = q.dequeue();
    cout << "Dequenced Elements" << x << endl;
    q.display();
    q.dequeue();
    q.dequeue();
    q.display();
        
    return 0;
}