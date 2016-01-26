#include <iostream>
using namespace std;

void addTenElementsAtBegining (int* array, int size)
{
    for (int i = 0; i < 10; i++)
    {
        if (i == size)
        {
            return;
        }
        array[i] = i;
    }
}

void pushFiveElements (int* array, int size, int& capacity)
{
    for (int i = 0; i < 5; i++, capacity++)
    {
        if (capacity == size)
        {
            return;
        }
        array[capacity] = capacity;
    }
}

void printArray (int* array, int capacity)
{
    for (int i = 0; i < capacity; i++)
    {
        cout << array[i] << ' ';
    }
    cout << endl;
}

int main ()
{
    int array[100];

    addTenElementsAtBegining(array,100);

    int capacity = 10;
    for (int i = 0; i < 10; i++)
    {
        pushFiveElements (array, 100, capacity);
    }

    printArray (array, capacity);

    return 0;
}
