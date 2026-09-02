#include <iostream>
using namespace std;

class Vector
{
private:
    int *arr = nullptr;
    int size = 0;
    int capacity = 0;

public:
    Vector(int size)
    {
        if (size < 0)
            size = 1;
        this->size = size;
        capacity = size + 10;
        arr = new int[capacity]{};
    }
    ~Vector()
    {
        delete[] arr;
        arr = nullptr;
    }

    int get(int index) const
    {
        if (0 <= index && index < size)
        {
            return arr[index];
        }
        return -1;
    }
    void set(int index, int val)
    {
        if (0 <= index && index < size)
        {
            arr[index] = val;
        }
    }

    void print() const
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << ' ';
        }
        cout << '\n';
    }
    int find(int val) const
    {
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == val)
            {
                return i;
            }
        }
        throw out_of_range("Index out of bounds");
    }

    int get_front() const
    {
        if (size == 0)
            return -1;
        return arr[0];
    }
    int get_back() const
    {
        if (size == 0)
            return -1;
        return arr[size - 1];
    }
    void expand_capacity()
    {
        capacity *= 2;
        int *arr2 = new int[capacity]{};
        for (int i = 0; i < size; i++)
            arr2[i] = arr[i];
        swap(arr2, arr);
        delete[] arr2;
    }
    void shrink_capacity()
    {
        capacity /= 2;
        int *arr2 = new int[capacity]{};
        for (int i = 0; i < size; i++)
            arr2[i] = arr[i];
        swap(arr2, arr);
        delete[] arr2;
    }

    void delete_at(int index)
    {
        if (index < 0 || index >= size)
            return;
        if (size <= capacity / 3)
        {
            shrink_capacity();
        }
        for (int i = index; i + 1 < size; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;
    }

    void push_back(int val)
    {
        if (size == capacity)
            expand_capacity();
        arr[size++] = val;
    }
};

int main()
{
    Vector v(3);
    v.set(0, 4);
    cout << v.find(4);
    return 0;
}