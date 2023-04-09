// Copyright 2021 NNTU-CS
#ifndef INCLUDE_TSTACK_H_
#define INCLUDE_TSTACK_H_
#include <string>
template<typename T, int size>
class TStack {
private:
    T arr[100];
    int highest;
public:
    TStack() : highest(-1) {}
    void push(T value) {
        if (!isFull())
            arr[++highest] = value;
        else
            throw std::string("Full");
    }
    T get() const {
        return arr[highest];
    }
    T pop() {
        if (isEmpty())
            throw std::string("Empty");
        else
            return arr[highest--];
    }
    bool isEmpty() const {
        return highest == -1;
    }
    bool isFull() const {
        return highest == size - 1;
    }
};
#endif  // INCLUDE_TSTACK_H_
