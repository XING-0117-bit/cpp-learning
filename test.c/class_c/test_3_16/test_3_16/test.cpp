#include <iostream>
#include <stdexcept>

template <typename T>
class Stack {
private:
    T* elements;
    size_t capacity;
    size_t top_index;

    void resize() {
        size_t new_capacity = capacity * 2;
        T* new_elements = new T[new_capacity];
        for (size_t i = 0; i < top_index; ++i)
            new_elements[i] = elements[i];
        delete[] elements;
        elements = new_elements;
        capacity = new_capacity;
    }

public:
    Stack() : capacity(10), top_index(0) {
        elements = new T[capacity];
    }

    Stack(const Stack& other) : capacity(other.capacity), top_index(other.top_index) {
        elements = new T[capacity];
        for (size_t i = 0; i < top_index; ++i)
            elements[i] = other.elements[i];
    }

    Stack& operator=(const Stack& other) {
        if (this != &other) {
            delete[] elements;
            capacity = other.capacity;
            top_index = other.top_index;
            elements = new T[capacity];
            for (size_t i = 0; i < top_index; ++i)
                elements[i] = other.elements[i];
        }
        return *this;
    }

    ~Stack() {
        delete[] elements;
    }

    void push(const T& value) {
        if (top_index >= capacity)
            resize();
        elements[top_index++] = value;
    }

    void pop() {
        if (empty())
            throw std::out_of_range("Stack::pop(): stack is empty");
        --top_index;
    }

    T& top() {
        if (empty())
            throw std::out_of_range("Stack::top(): stack is empty");
        return elements[top_index - 1];
    }

    const T& top() const {
        if (empty())
            throw std::out_of_range("Stack::top() const: stack is empty");
        return elements[top_index - 1];
    }

    bool empty() const {
        return top_index == 0;
    }

    size_t size() const {
        return top_index;
    }
};

int main() {
    Stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);

    std::cout << "栈顶元素: " << s.top() << std::endl;   // 30
    std::cout << "栈大小: " << s.size() << std::endl;    // 3

    s.pop();
    std::cout << "弹出后栈顶: " << s.top() << std::endl; // 20

    while (!s.empty()) {
        std::cout << "弹出: " << s.top() << std::endl;
        s.pop();
    }

    return 0;
}