#include <stdio.h>
#include <iostream>

using namespace std;

void swap (int *x, int *y) {
    int z = *x;
    *x = *y;
    *y = z;
}

class MaxHeap
{
private:
    int *arr;
    int size;
    int capacity;
public:
    MaxHeap(int capacity);
    ~MaxHeap();

    int parent(int i) {return (i-1) / 2;}
    int left(int i) {return (i+1)*2;}
    int right(int i) {return i*2 +2;}
    void heapify(int i) {

        int l = left(i);
        int r = right(i);
        int max = i;
        if (l < size && arr[l] > arr[max]) 
        {
            max = l;
        } 
        if (r < size && arr[r] > arr[max])
        {
            max = r;
        }
        if (max != i)
        {
            swap(&arr[max], &arr[i]);
            heapify(max);
        }
    }

    void add(int num) {
        // Stop if is full
        if (size == capacity)
        {
            cout << "Heap is full!!";
            return;
        }


        size++;
        int i = size - 1;
        arr[i] = num;


        while (i > 0 && arr[i] > arr[parent(i)])
        {
            swap(&arr[i], &arr[parent(i)]);
            i = parent(i);
        }
        
        
    }

    void print() {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
};

MaxHeap::MaxHeap(int capacity)
{
    this->capacity = capacity;
    arr = new int[capacity];
    size = 0;
}

MaxHeap::~MaxHeap()
{
    delete[] arr;
}

int main(int argc, char const *argv[])
{
    
    
    return 0;
}
