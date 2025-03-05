#include <iostream>
using namespace std;

class CircularQueue {
private:
    int front, rear, size;
    int *queue;
    int capacity; // Maximum size of the queue

public:
    // Constructor to initialize the queue
    CircularQueue(int cap) {
        capacity = cap;
        queue = new int[capacity];
        front = rear = -1;
        size = 0;
    }

    // Function to check if the queue is full
    bool isFull() {
        return (size == capacity);
    }

    // Function to check if the queue is empty
    bool isEmpty() {
        return (size == 0);
    }

    // Function to enqueue an element to the rear of the queue
    void enqueue(int data) {
        if (isFull()) {
            cout << "Queue is full. Cannot enqueue element " << data << endl;
            return;
        }

        // Circular increment for the rear
        rear = (rear + 1) % capacity;
        queue[rear] = data;
        size++;

        // If it's the first element, set front to 0
        if (front == -1) {
            front = rear;
        }
    }

    // Function to dequeue an element from the front of the queue
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return;
        }

        cout << "Dequeued element: " << queue[front] << endl;

        // Circular increment for the front
        front = (front + 1) % capacity;
        size--;
        
        // If the queue becomes empty after dequeue, reset front and rear
        if (isEmpty()) {
            front = rear = -1;
        }
    }

    // Function to print the elements of the queue
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }

        cout << "Elements in the Circular Queue: ";
        int i = front;
        for (int count = 0; count < size; count++) {
            cout << queue[i] << " ";
            i = (i + 1) % capacity;  // Circular increment
        }
        cout << endl;
    }
};

int main() {
    CircularQueue q(4);  // Create a circular queue with size 4

    // Enqueue elements
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    // Display the queue
    q.display();

    // Dequeue an element
    q.dequeue();

    // Display the queue
    q.display();

    // Enqueue more elements
    q.enqueue(40);
    q.enqueue(50);  // This should wrap around to the beginning

    // Display the queue
    q.display();

    // Trying to enqueue when the queue is full
    q.enqueue(60);  // This should show a "Queue is full" message

    // Dequeue all elements
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();  // The queue is now empty

    // Display the queue
    q.display();

    return 0;
}
