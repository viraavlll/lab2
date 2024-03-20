

#include <iostream>
using namespace std;
void function1(int n, int& a, int& b) { //Функція з параметрами-вказівниками, яка нічого не повертає
    if (n > 7) { //Перевірка умови
       a = n / 5; //Параметри функції
       b = (n % 5) / 3;
    }
    else { 
        return;
    }
}

template <class T> void function2(T n, T& a, T& b) { // Шаблон функції
    if (n > 7) { //Перевірка умови
        a = n / 5;
        b = (n % 5) / 3;
    }
    else {
        return;
    }

}

int main() {
    setlocale( LC_CTYPE, "ukr" );
    int n; .//Ініціалізація змінної n
    int a, b; //Ініціалізація змінної a i b

    cout << "Введiть число n: "; 
    cin >> n; //Введення з клавіатури числа n

    function1(n, a, b); //Оголошення функції 1
    function2 <int>(n, a, b); //Оголошення функції 2

    cout << "a = " << a << endl; //Виведення результату a
    cout << "b = " << b << endl; //Виведення результату b
    
    return 0;
}
