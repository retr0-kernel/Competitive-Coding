/*Implementation of queue using arrays*/

/*
front and rear, two variables will be initialized to 0 which means queue is empty
Rear - It is the index up to which elements are stored in the array
Front - It is the index of the first element of the array
*/

/*
Enqueue: Addition of an element to the queue. Adding an element will be performed after checking whether the queue is full or not. If rear < n which indicates that the array is not full then store the element at arr[rear] and increment rear by 1 but if rear == n then it is said to be an Overflow condition as the array is full.

Dequeue: Removal of an element from the queue. An element can only be deleted when there is at least an element to delete i.e. rear > 0. Now, the element at arr[front] can be deleted but all the remaining elements have to shift to the left by one position in order for the dequeue operation to delete the second element from the left on another dequeue operation.

Front: Get the front element from the queue i.e. arr[front] if the queue is not empty.

Display: Print all elements of the queue. If the queue is non-empty, traverse and print all the elements from the index front to rear.
*/
#include <bits/stdc++.h>
using namespace std;

struct Queue{
    int front, rear, capacity;
    int* queue;
    Queue(int c){
        front = rear = 0;
        capacity = c;
        queue = new int;
    }
    ~Queue(){
        delete[] queue;
    }

    void enqueue(int data){
        if(capacity == rear){
            cout<<"Overflow\n";
            return;
        }
        else{
            queue[rear]=data;
            rear++;
        }
        return;
    }

    void dequeue(){
        if(front==rear){
            cout<<"Underflow\n";
            return;
        }
        else{
            for(int i=0;i<rear-1;i++){
                queue[i]=queue[i+1];
            }
            rear--;
        }
        return;
    }

    void display(){
        int i;
        if(front==rear){
            cout<<"Queue is empty\n";
            return;
        }
        else{
            for(i=front;i<rear;i++){
                cout<<queue[i]<<" ";
            }
            return;
        }

        void front(){
            if(front==rear){
                cout<<"Queue is empty"<<endl;
                return;
            }
            cout<<"Front element is: "<<queue[front];
            return;
        }
    }
};

int main(void)
{
    Queue q(4);
    q.display();
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.display();
    q.enqueue(60);
    q.display();
    q.dequeue();
    q.dequeue();
    printf("\n\nafter two node deletion\n\n");
    q.display();
    q.front();
    return 0;
}