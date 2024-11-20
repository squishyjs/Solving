#include <iostream>
#include <vector>

void vectorFunctions() {

    std::vector<int> foo_vector = {5, 10, 15, 20, 25, 30};
    
    std::cout << "Initial vector: ";

    for (const int& i : foo_vector) { // printing the intial vector
        std::cout << i << " ";
    }
    
    // adding integers 6 and 7 to the vector
    foo_vector.push_back(35);
    foo_vector.push_back(40);

    // output change
    std::cout << "\n Updated Vector: ";
    for (const int& i : foo_vector) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    // accessing vector elements
    // loop over vector using .at()

    for (int i = 0; i < foo_vector.size(); ++i) {
        std::cout << "Element at index " << i << " is: " << foo_vector.at(i);
        std::cout << "\n";
    }
    // loop over vector using '[]' square brackets
    for (int i = 0; i < foo_vector.size(); ++i) {
        std::cout << "Element = " << foo_vector[i];
        std::cout << "\n";
    }

    // changing vector element
    foo_vector[0] = 100;
    std::cout << "The vector is now: " << std::endl;
    for (const int& i : foo_vector) {
        std::cout << i << " " << "\n";
    }

    // removing vector element
    foo_vector.pop_back(); // O(1)
    std::cout << "The vector is now: " << std::endl;
    for (const int& i : foo_vector) {
        std::cout << i << " " << "\n";
    }
    
    // removing vector element at specific position
    std::cout << "Removing the element '20'..." << "\n";
    for (size_t i = 0; i < foo_vector.size(); ) {
        if (foo_vector[i] == 20) {
            foo_vector.erase(foo_vector.begin() + i);
            // do not increment 'i' to check the new element the new element at this index
        } else {
            ++i;
        }
    }
    std::cout << "The vector is now: " << std::endl;
    for (const int& i : foo_vector) {
        std::cout << i << " ";
    }  // YES!! it works!!
}

void vectorArray() {

    // std::vector<int> my_vector = {5, 10, 15, 20, 25, 30, 35};

    std::vector<int> my_vector = {1, 2, 3, 4, 5, 6};
    // iterating vector using for-loop
    std::cout << "Looping using for-loop:" << "\n";
    for (size_t i = 0; i< my_vector.size(); ++i) {
        std::cout << "Element " << i << " = " << my_vector[i] << "\n";
    }

    // iterating vector using ranged loop #1
    std::cout << "Using ranged-loop:" << "\n";
    for (const int& i : my_vector) {
        std::cout << i << " ";
    }
    std::cout << "\n";
    // iterating vector using ranged loop # 2
    std::cout << "Using ranged-loop: " << "\n";
    for (int i : my_vector) {
        std::cout << i << " ";
    }
}

void array_address_pointer() {

    int my_array[] = {1, 2, 3, 4};
    
    // Define a pointer
    int* ptr = my_array;
    
    // Printing address of my_array using array name
    std::cout << "Memory address of my array is: " << &my_array << std::endl;

    // Printing address of the array using pointer
    std::cout << "Memory address of my array is: " << ptr << std::endl;

    size_t my_array_size = sizeof(my_array) / sizeof(my_array[0]);

    for (size_t i = 0; i < my_array_size; ++i) {
        std::cout << my_array[i] << "\n";
    }
}

void array_pointers() {
    std::cout << "hello world" << std::endl;
}

int main() {

    // array_pointers(); // call the function -> hello world
    // array_address_pointer(); // pointing to array memory addresses
    // std::cout << "Printing the vector array function" << std::endl;
    // vectorArray();

    std::cout << "Printing array function operations" << std::endl;
    vectorFunctions();
    

    return 0;
}