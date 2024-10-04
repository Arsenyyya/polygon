#include <iostream>
#include <vector>
bool is_Palindrome(const std::vector<int>& array, int start, int end) {
    while (start < end) {
        if (array[start] != array[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int main() {
    int arraySize;
    std::cout << "Введите, размер массива: ";
    std::cin >> arraySize;

    std::vector<int> array(arraySize);
    std::cout << "Введите элементы массива: ";
    for (int i = 0; i < arraySize; i++) {
        std::cin >> array[i];
    }
    std::cout << "Палиндромные подмассивы:" << std::endl;
    for (int start_index = 0; start_index < arraySize; start_index++) {
        for (int end_index = start_index + 1; end_index < arraySize; end_index++) {
            if (is_Palindrome(array, start_index, end_index)) {
                std::cout << "[";
                for (int sub_index = start_index; sub_index <= end_index; sub_index++) {
                    std::cout << array[sub_index];
                    if (sub_index != end_index) {
                        std::cout << " ";
                    }
                }
                std::cout << "]" << std::endl;
            }
        }
    }
    return 0;
}
