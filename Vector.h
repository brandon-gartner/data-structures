#ifndef VECTOR_H
#define VECTOR_H

template <typename T>
class Vector {
private:
    int _size;
    int _capacity;
    T* _data;

public:
    Vector(int size = 10);
    ~Vector();
    int size() const;
    int capacity() const;
    T at(int index) const;
    void push_back(T value);
    T pop_back();
    bool isEmpty() const;
};

#endif