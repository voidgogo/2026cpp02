#include <iostream>
#include <cassert>
using namespace std;

template <typename T>
class Stack
{
private:
    T* ptr;
    int capacity;
    int size;
public:
    Stack(int capacity) : capacity(capacity), size(0)
    {
        ptr = new T[capacity];
    }
    ~Stack() {
        delete[] ptr;
        ptr = nullptr;
    }
    void push(const T& element) {
        if (size < capacity)
        {
            ptr[size] = element;
            size++;
        }
        else
        {
            cout << "스택이 꽉 차서 삽입할 수 없습니다." << endl;
            assert(false);
        }
    }
    T pop() {
        if (size > 0)
        {
            T temp = ptr[size - 1];
            size--;
            return temp;
        }
        else
        {
            cout << "스택이 비어서 삭제할 수 없습니다." << endl;
            assert(false);
        }
    }
};

int main()
{
    //Stack<int> stack(10);
    Stack<int> stack(3);
    stack.push(15);
    stack.push(-7);
    stack.push(7);
    stack.push(8);
    cout << stack.pop() << endl;
    cout << stack.pop();
    return 0;
}