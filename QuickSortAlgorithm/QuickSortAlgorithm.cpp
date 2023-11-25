#include <iostream>

class QuickSort {
private:
    int arr[20];
    int cmp_count;
    int mov_count;
    int n;

    void input() {
        while (true) {
            std::cout << "Enter the number of elements in the array: ";
            std::cin >> n;

            if (n <= 20)
                break;
            else
                std::cout << "\nArray can have a maximum of 20 elements\n";
        }

        std::cout << "\n=====================";
        std::cout << "\nEnter Array Elements";
        std::cout << "\n====================\n";

        for (int i = 0; i < n; i++) {
            std::cout << "<" << (i + 1) << ">";
            std::cin >> arr[i];
        }
    }
};