#ifndef DOUBLE_H
#define DOUBLE_H

#include "../double.h"

template <typename T>
class QueueList : public DoubleList<T> {     
    public:
        QueueList() : DoubleList() { }

        void enqueue(T value) {
            // TODO
        } 

        T dequeue() {
            // TODO
        } 

        T front() {
            // TODO
        }
             
        ~QueueList() {
            if (head) {
                head->killSelf();
            } 
        }         
};

#endif