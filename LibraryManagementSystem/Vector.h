#ifndef VECTOR_H
#define VECTOR_H

#include <stdexcept>
#include <QDebug>

// Template Class Definition
template <typename T>
class Vector {
private:
    T* data;          // Pointer to the dynamically allocated array
    size_t Size;      // Current size of the vector
    size_t capacity;  // Current capacity of the vector

    // Resizing Function
    void Resize(size_t newCapacity) {
        T* newData = new T[newCapacity];
        for (size_t i = 0; i < Size; ++i) {
            newData[i] = data[i];
        }
        delete[] data;
        data = newData;
        capacity = newCapacity;
    }

public:
    // Constructors
    Vector() : data(nullptr), Size(0), capacity(0) {
        qDebug() << "Vector constructed empty\n";
    }

    Vector(size_t initialSize) : Size(initialSize), capacity(initialSize) {
        qDebug() << "Vector constructed with Size\n";
        data = new T[capacity];
    }

    Vector(const Vector<T>& other) : data(nullptr), Size(other.Size), capacity(other.capacity) {
        qDebug() << "Vector copied\n";
        if (other.data != nullptr) {
            data = new T[capacity];
            for (size_t i = 0; i < Size; ++i) {
                data[i] = other.data[i];
            }
        }
    }

    ~Vector() {
        delete[] data;
        data = nullptr;
    }

    // Getters
    size_t size() const {
        qDebug() << "Vector size\n";
        return Size;
    }

    size_t getCapacity() const {
        qDebug() << "Vector capacity\n";
        return capacity;
    }

    bool empty() const {
        qDebug() << "Vector empty\n";
        return Size == 0;
    }

    // Basic Functionality
    void push_back(const T& value) {
        qDebug() << "Vector push_back\n";
        if (Size == capacity) {
            if (capacity > (SIZE_MAX / 2)) {
                throw std::overflow_error("Vector capacity overflow");
            }
            Resize(capacity == 0 ? 1 : capacity * 2);
        }
        data[Size++] = value;
    }

    void pop_back() {
        qDebug() << "Vector pop_back\n";
        if (Size > 0) {
            --Size;
        }
    }

    void clear() {
        qDebug() << "Vector clear\n";
        delete[] data;
        data = nullptr;
        Size = 0;
        capacity = 0;
    }

    void erase(T* it) {
        qDebug() << "Vector erase\n";
        if (it < begin() || it >= end()) {
            throw std::out_of_range("Iterator out of range");
        }

        size_t index = it - begin();
        for (size_t i = index; i < Size - 1; ++i) {
            data[i] = data[i + 1];
        }
        --Size;
    }

    T* find(const T& value) {
        qDebug() << "Vector find\n";
        for (size_t i = 0; i < Size; ++i) {
            if (data[i] == value) {
                return data + i;
            }
        }
        return end();
    }

    void resize(size_t newCapacity, T value) {
        qDebug() << "Vector resize\n";
        T* newData = new T[newCapacity];
        size_t i = 0;

        for (; i < Size && i < newCapacity; ++i) {
            newData[i] = data[i];
        }
        for (; i < newCapacity; ++i) {
            newData[i] = value;
        }

        delete[] data;
        data = newData;
        capacity = newCapacity;
        Size = newCapacity;
    }

    void reserve(size_t newCapacity) {
        if (newCapacity > capacity) {
            Resize(newCapacity);
        }
    }

    // Operator Overloads
    Vector<T>& operator=(const Vector<T>& other) {
        qDebug() << "Vector assignment\n";
        if (this == &other) {
            return *this;
        }

        delete[] data;

        Size = other.Size;
        capacity = other.capacity;
        data = new T[capacity];

        for (size_t i = 0; i < Size; ++i) {
            data[i] = other.data[i];
        }

        return *this;
    }

    T& operator[](size_t index) {
        if (index >= Size) {
            throw std::out_of_range("Index out of range");
        }
        return data[index];
    }

    const T& operator[](size_t index) const {
        if (index >= Size) {
            throw std::out_of_range("Index out of range");
        }
        return data[index];
    }

    // Iterators
    T* begin() {
        qDebug() << "Vector begin\n";
        return data;
    }

    const T* begin() const {
        return data;
    }

    T* end() {
        qDebug() << "Vector end\n";
        return data + Size;
    }

    const T* end() const {
        return data + Size;
    }

    // Debugging Helper
    void debugPrint() const {
        qDebug() << "Vector Debug:";
        for (size_t i = 0; i < Size; ++i) {
            qDebug() << data[i];
        }
    }
};

#endif // VECTOR_H
