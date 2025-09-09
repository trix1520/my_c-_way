#include <iostream>

class MyClass {
public:
    int* func(int arr[], int size) {
        for (int i = 0; i < size; ++i)
            arr[i] += 2;
        return arr;
    }
};

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << ' ' << &arr[i] << ' ';
    std::cout << std::endl;
}

int main() {
    int size = 5;
    int* arr = new int[size]{1, 2, 3, 4, 5};
    
    MyClass obj;
    obj.func(arr, size);
    printArray(arr, size);
    
    delete[] arr; // Don't forget to free memory
    return 0;
}
