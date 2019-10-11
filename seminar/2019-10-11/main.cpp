#include <iostream>
#include <ctime>
using namespace std;

const size_t SIZE = 5;
enum SortDirection { asc = 0, desc };

int up_min(int, int);
int up_get_random_number(int);
void up_sort(int *, SortDirection = asc);
void up_print(int *, size_t);
void up_copy(char *, char*, size_t);
void up_capitalize(char *);

int main() {
    srand(time(0));

    int numbers[SIZE] = { 0 };

    for (size_t i = 0; i < SIZE; ++i) {
        numbers[i] = up_get_random_number(20);
    }

    up_print(numbers, SIZE);

    return 0;
}

int up_min(int a, int b) {
    // Върнете по-малкото от двете числа
    return 0;
}

int up_get_random_number(int limit) {
    return (rand() % limit) + 1;
}

void up_sort(int * numbers, SortDirection direction) {
    // Сортирайте в посока SortDirection: asc = възходяща, desc = низходяща 

    if (direction == asc) {
        cout << "asc" << endl;
    } else {
        cout << "desc" << endl;
    }
}

void up_print(int * numbers, size_t size) {
    cout << "[ ";
    for (size_t i = 0; i < size; ++i) {
        cout << numbers[i] << ((i < size - 1) ? ", " : " ]");
    }
    cout << endl;
}

void up_copy(char * source, char* destination, size_t destination_size) {
    // Копирайте масива от source в масива destination
}

void up_capitalize(char * name) {
    // Обходете масив от символи и заменете всяка буква, която е:
    // - първа
    // - предхождана от интервал
    // ако тя е малка, я заменете с главна.
    // Ако има главна буква на друго място в масива, то сменете я
    // с еквивалентната ѝ малка.
}