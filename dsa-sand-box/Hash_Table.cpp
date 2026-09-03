#include <iostream>
#include <vector>
using namespace std;

struct HashNode
{
    int key;
    string val;
    HashNode *next;

    HashNode(int k, string v)
    {
        key = k;
        val = v;
        next = nullptr;
    }
};

class HashTable
{
private:
    int arraySize = 10;
    int totalelement = 0;
    HashNode **Table;

    int hashFunction(int key)
    {
        return key % arraySize;
    }

    void rehash(int newSize)
    {
        // Make it after learn linked list
    }

public:
    HashTable()
    {
        Table = new HashNode *[arraySize];
        for (int i = 0; i < arraySize; i++)
        {
            Table[i] = nullptr;
        }
    }
    ~HashTable()
    {
        for (int i = 0; i < arraySize; i++)
        {
            HashNode *current = Table[i];
            while (current != nullptr)
            {
                HashNode *prev = current;
                current = current->next;
                delete prev;
            }
        }

        delete[] Table;
    }

    void set(int key, string val)
    {
        int index = hashFunction(key);
        HashNode *newNode = new HashNode(key, val);
        totalelement++;
        float loadFactor = (float)totalelement / arraySize;
        if (Table[index] == nullptr)
        {
            Table[index] = newNode;
            if (loadFactor >= 0.75)
            {
                rehash(arraySize * 2);
            }
            return;
        }

        HashNode *current = Table[index];
        while (current != nullptr)
        {
            if (current->key == key)
            {
                current->val = val;
                delete newNode;
                if (loadFactor >= 0.75)
                {
                    rehash(arraySize * 2);
                }
                return;
            }

            if (current->next == nullptr)
            {
                break;
            }
            current = current->next;
        }
        if (loadFactor >= 0.75)
        {
            rehash(arraySize * 2);
        }
        current->next = newNode;
    }

    string get(int key)
    {
        int index = hashFunction(key);
        HashNode *current = Table[index];
        while (current != nullptr)
        {
            if (current->key == key)
            {
                return current->val;
            }
            current = current->next;
        }
        return "Not Found";
    }

    void printTable()
    {
        for (int i = 0; i < arraySize; i++)
        {
            cout << "Index " << i << ": ";
            HashNode *current = Table[i];

            while (current != nullptr)
            {
                cout << "[" << current->key << ":" << current->val << "] -> ";
                current = current->next;
            }
            cout << "nullptr\n";
        }
    }

    void remove(int key)
    {
        int index = hashFunction(key);
        HashNode *current = Table[index];
        HashNode *prev = nullptr;
        while (current != nullptr)
        {
            if (current->key == key)
            {
                if (prev == nullptr)
                {
                    Table[index] = current->next;
                }
                else
                {
                    prev->next = current->next;
                }
                delete current;
                cout << "Deleted key: " << key << "\n";
                totalelement--;
                float loadFactor = (float)totalelement / arraySize;
                if(loadFactor <= 0.25 && arraySize > 10){
                    rehash(arraySize / 2);
                }
                return;
            }
            prev = current;
            current = current->next;
        }
        cout << "Key not found to delete!\n";
    }
};

int main()
{

    HashTable ht;
    ht.set(10, "Hi");
    ht.set(110, "i");
    ht.set(120, "am");
    ht.set(130, "mohamed");
    ht.set(101, "Hi");
    ht.set(1101, "i");
    ht.set(1201, "am");
    ht.set(1301, "mohamed");
    ht.remove(10);
    ht.remove(1101);
    ht.printTable();
    return 0;
}