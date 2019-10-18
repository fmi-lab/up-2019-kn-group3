#include <iostream>
#include <ctime> // нужна библиотека за seed 
using namespace std; // using е директива, която позволява използването на име от даден namespace;
// namespace-а ни позволява да капсулираме определени имена

const size_t SIZE = 5; // size_t е unsigned, т.е. минималната му стойност е 0, а големината в битове 
// на типа е такава, че променлива от този тип би могла да държи в себе си максималната стойност на 
// всеки от останалите стандартни типове. Затова често се ползва за индексиране на масиви.
// Не е нужно да го използвате, ако не разбирате, защо бихте го използвали, ще го обяснявам; мислете
// го за unsigned int.

enum SortDirection { asc = 0, desc };

// вместо да prepend-ваме имената на функциите можем да си създадем наш си namespace
namespace up {
    int min(int, int);
    int get_random_number(int);
    void sort(int *, SortDirection = asc);
    void print(int *, size_t);
    void copy(char *, char*, size_t);
    void capitalize(char *);

    const unsigned int red = 0xFF000000;
    const unsigned int green = 0x00FF0000;
    const unsigned int blue = 0x0000FF00;
    const unsigned int alpha = 0x000000FF;

    struct color {
        unsigned int red;
        unsigned int green;
        unsigned int blue;
        unsigned int alpha;

        void set_color(unsigned int);
        void print();
    };
}

int main() {
    srand(time(0));

    int numbers[SIZE] = { 0 };

    for (size_t i = 0; i < SIZE; ++i) {
        numbers[i] = up::get_random_number(20);
    }

    up::print(numbers, SIZE);

    return 0;
}

int up::min(int a, int b) {
    // Върнете по-малкото от двете числа
    return 0;
}

int up::get_random_number(int limit) {
    return (rand() % limit) + 1;
}

void up::sort(int * numbers, SortDirection direction) {
    // Сортирайте в посока SortDirection: asc = възходяща, desc = низходяща 

    // Имплементирайте Bubble sort, Selection Sort и Insertion Sort
    // Създайте нов enum, който да служи за избор на типа на сортиране

    if (direction == asc) {
        cout << "asc" << endl;
    } else {
        cout << "desc" << endl;
    }
}

void up::print(int * numbers, size_t size) {
    cout << "[ ";
    for (size_t i = 0; i < size; ++i) {
        cout << numbers[i] << ((i < size - 1) ? ", " : " ]");
    }
    cout << endl;
}

void up::copy(char * source, char* destination, size_t destination_size) {
    // Копирайте масива от source в масива destination
}

void up::capitalize(char * name) {
    // Обходете масив от символи и заменете всяка буква, която е:
    // - първа
    // - предхождана от интервал
    // ако тя е малка, я заменете с главна.
    // Ако има главна буква на друго място в масива, то сменете я
    // с еквивалентната ѝ малка.
}


void up::color::set_color(unsigned int pixel) { // right shift operator 
    this->red = static_cast<unsigned int>(pixel & up::red) >> 24;
    this->green = static_cast<unsigned int>(pixel & up::green) >> 16;
    this->blue = static_cast<unsigned int>(pixel & up::blue) >> 8;
    this->alpha = static_cast<unsigned int>(pixel & up::alpha);
}

void up::color::print() {
    cout << hex << this->red << this->green << this->blue << endl;
}