// Your First C++ Program

#include <iostream>



int main() {
    int anzahl = 0;
    std::cout << "wie viele namen?" << std::endl;
    std::cin >> anzahl;

    char* array = new char[anzahl];

    for(int i = 0; i < anzahl; i++)
    {
        std::cout << "buchstabe " << std::endl;
        std::cin >> array[i];
    }

    std::sort(array, array + anzahl);
    std::cout << "sorted: " << std::endl;

    for(int i = 0; i < anzahl; i++)
    {
        std::cout << array[i] << std::endl;
    }
    delete[] array;

    return 0;
}