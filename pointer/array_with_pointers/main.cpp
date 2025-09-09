#include <iostream>

class MyClass {
public:
    int* func(int arr[], int *size) {
        for (int i = 0; i < *size; ++i)
            arr[i] += 2;
        return arr;
    }
};

void printArray(int arr[], int *size) {
    for (int i = 0; i < *size; i++) {
        std::cout << "Now arr[" << i << "] is " << arr[i]<< " addres arr["<< i << "]: " << &arr[i] << ' ';
        std::cout << '\n';
    }
    std::cout << "Addres size: " << size << '\n';
}

int main() {
    int size = 5;
    int* arr = new int[size]{1, 2, 3, 4, 5};

    printArray(arr, &size);
    std::cout << '\n';
        
    MyClass obj;
    obj.func(arr, &size);
    printArray(arr, &size);
    
    delete[] arr; // Don't forget to free memory
    return 0;
}
