#include <iostream>

int main() {
    int data[12] = {15, 22, 8, 7, 42, 5, 19, 31, 9, 2, 47, 24};
    int target = 12;
    int index = -1;

    // Linear Search
    for (int i = 0; i < 12; ++i) {
        if (data[i] == target) {
            index = i; // Update index if found
            break; // Exit the loop
        }
    }

    // Output the result
    if (index != -1) {
        std::cout << "Found " << target << " at index " << index << std::endl;
    } else {
        std::cout << target << " not found in the list." << std::endl;
    }

    return 0;
}
