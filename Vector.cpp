#include "Vector.h"

// template <typename T>
// class Vector {
// private:
//     T[] _data;
//     int _size;
// public:
//     Vector(int size = 10);
//     Vector(T[] data);
//     ~Vector();
//     int size() const;
//     T at(int index) const;
//     void push_back(T value);
//     T pop_back();
//     bool isEmpty() const
// };

template <typename T>
Vector<T>::Vector(int size): _data{new T[size]}, _size{size}, _capacity{0} {}

template <typename T>
Vector<T>::~Vector<T>() {
    delete[] _data;
}

template <typename T>
int Vector<T>::size() const {
    return _size;
}

template <typename T>
int Vector<T>::capacity() const {
    return _capacity;
}

template <typename T>
T Vector<T>::Vector::at(int index) const {
    //TODO
    return _data[index];
}

template <typename T>
void Vector<T>::push_back(T value) {
    if (_capacity + 1 == _size) {
        T* newData = new T[(_size * 2)];
        for (int i = 0; i < _size; i++) {
            newData[i] = _data[i];
        }
        delete[] _data;
        _data = newData;
        _size *= 2;
    } 
    _data[_capacity] = value;
    _capacity++;
}

template <typename T>
T Vector<T>::pop_back() {
    _capacity--;
    return _data[_capacity];
}

template <typename T>
bool Vector<T>::isEmpty() const {
    return (_size == 0);
}