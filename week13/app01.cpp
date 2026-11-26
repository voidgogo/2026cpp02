//#include <iostream>
//#include <cassert>
//using namespace std;
//
//class Pokemon {
//public:
//    int hp;
//    Pokemon() :hp(0) {  // default constructor
//        cout << "포켓몬 객체 생성(기본 생성자)\n";
//    }
//    Pokemon(int hp) : hp(hp) {  // parameter constructor
//        cout << "포켓몬 객체 생성(매개변수 생성자)\n";
//    }
//};
//
//template <typename T>
//class Stack
//{
//private:
//    T* ptr;
//    int capacity;
//    int size;
//public:
//    Stack(int capacity) : capacity(capacity), size(0)
//    {
//        ptr = new T[capacity];
//    }
//    ~Stack() {
//        delete[] ptr;
//        ptr = nullptr;
//    }
//    void push(const T& element) {
//        if (size < capacity)
//        {
//            ptr[size] = element;
//            size++;
//        }
//        else
//        {
//            cout << "스택이 꽉 차서 삽입할 수 없습니다." << endl;
//            assert(false);
//        }
//    }
//    T pop() {
//        if (size > 0)
//        {
//            T temp = ptr[size - 1];
//            size--;
//            return temp;
//        }
//        else
//        {
//            cout << "스택이 비어서 삭제할 수 없습니다." << endl;
//            assert(false);
//        }
//    }
//};
//
//typedef Stack<int> iStack;  // alias
//typedef Stack<Pokemon*> pStack;  // alias
//int main()
//{
//    //Stack<int> stack(10);
//    Pokemon* pikachu = new Pokemon(100);
//    Pokemon* mu = new Pokemon(120);
//    pStack pokemons(2);
//
//    pokemons.push(pikachu);
//    pokemons.push(mu);
//
//    //Stack<int> stack(5);
//    iStack stack(5);
//    stack.push(15);
//    stack.push(-7);
//    stack.push(7);
//    stack.push(8);
//    cout << stack.pop() << endl;
//    cout << stack.pop();
//
//    delete pikachu;
//    pikachu = nullptr;
//    delete mu;
//    mu = nullptr;
//
//    return 0;
//}