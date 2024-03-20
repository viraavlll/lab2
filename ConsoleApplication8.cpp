

#include <iostream>
using namespace std;
void function1(int n, int& a, int& b) {
    if (n > 7) {
       a = n / 5;
       b = (n % 5) / 3;
    }
    else { 
        return;
    }
}

template <class T> void function2(T n, T& a, T& b) {
    if (n > 7) {
        a = n / 5;
        b = (n % 5) / 3;
    }
    else {
        return;
    }

}

int main() {
    setlocale( LC_CTYPE, "ukr" );
    int n;
    int a, b;

    cout << "Введiть число n: ";
    cin >> n;

    function1(n, a, b);
    function2 <int>(n, a, b);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    
    return 0;
}
