#ifndef DOUBLE_H
#define DOUBLE_H
#include "../double.h"

template <typename T>
class StackList : public DoubleList<T> {     
    public:
        StackList() : DoubleList() { };

        void push(T value) {
            // TODO
        } 

        T top() {
            // TODO
        } 

        T pop() {
            // TODO
        }
             
        ~StackList() {
          if (head) {
                head->killSelf();
            } 
        }         
};

#endif