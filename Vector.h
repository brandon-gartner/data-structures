#ifndef VECTOR_H
#define VECTOR_H

template <typename T>
class Vector {
private:
    T _data[];
    int _size;
    int _capacity;

public:
    Vector(int size = 10);
    Vector(T data[]);
    ~Vector();
    int size() const;
    int capacity() const;
    T at(int index) const;
    void push_back(T value);
    T pop_back();
    bool isEmpty() const;
};

#endif