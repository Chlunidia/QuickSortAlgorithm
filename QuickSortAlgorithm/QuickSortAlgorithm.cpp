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

    void swap(int x, int y) {
        int temp = arr[x];
        arr[x] = arr[y];
        arr[y] = temp;
    }

public:
    QuickSort() : cmp_count(0), mov_count(0), n(0) {}

    void q_sort(int low, int high) {
        int pivot, i, j;
        if (low > high)
            return;

        i = low + 1;
        j = high;

        pivot = arr[low];

        while (i <= j) {
            while ((arr[i] <= pivot) && (i <= high)) {
                i++;
                cmp_count++;
            }
            cmp_count++;

            while ((arr[j] > pivot) && (j >= low)) {
                j--;
                cmp_count++;
            }
            cmp_count++;

            if (i < j) {
                swap(i, j);
                mov_count++;
            }
        }

        if (low < j) {
            swap(low, j);
            mov_count++;
        }

        q_sort(low, j - 1);
        q_sort(j + 1, high);
    }
};